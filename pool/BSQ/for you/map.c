/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:51:25 by vmicaell          #+#    #+#             */
/*   Updated: 2024/08/07 22:45:30 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

static void	check_unique_chars(char empty, char obstacle, char fill)
{
	if (empty == obstacle || empty == fill || obstacle == fill)
		map_error("Map characters must be unique");
}

static void	parse_first_line(t_map *map, char *buffer, size_t first_line_len)
{
	size_t	i;

	if (first_line_len < 4)
		map_error("Invalid first line format");
	map->rows = 0;
	i = 0;
	while (is_digit(buffer[i]) && i < first_line_len - 3)
	{
		map->rows = map->rows * 10 + (buffer[i] - '0');
		i++;
	}
	if (i == 0 || i > first_line_len - 3)
		map_error("Invalid first line format");
	map->empty = buffer[first_line_len - 3];
	map->obstacle = buffer[first_line_len - 2];
	map->fill = buffer[first_line_len - 1];
	check_unique_chars(map->empty, map->obstacle, map->fill);
}

static void	read_map_grid(t_map *map, char *second_line)
{
	ssize_t	bytes_read;
	size_t	total_read;

	total_read = 0;
	lseek(map->fd, second_line - map->buffer, SEEK_SET);
	while (total_read < map->file_size)
	{
		bytes_read = read(map->fd, map->grid + total_read, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		total_read += bytes_read;
	}
	if (total_read != map->file_size)
		map_error("map error");
	map->grid[map->file_size] = '\0';
}

static void	process_map_data(t_map *map, ssize_t bytes_read)
{
	char	*newline;
	char	*second_line;
	size_t	first_line_len;

	newline = my_memchr(map->buffer, '\n', bytes_read);
	if (!newline)
		map_error("Invalid map format");
	first_line_len = newline - map->buffer;
	parse_first_line(map, map->buffer, first_line_len);
	second_line = newline + 1;
	newline = my_memchr(second_line, '\n', bytes_read - (second_line
				- map->buffer));
	if (!newline)
		map_error("Invalid map format");
	map->cols = newline - second_line;
	map->file_size = map->rows * (map->cols + 1);
	map->grid = (char *)malloc(map->file_size + 1);
	if (!map->grid)
		map_error("Memory allocation failed");
	read_map_grid(map, second_line);
}

t_map	*init_map(const char *filename)
{
	t_map	*map;
	ssize_t	bytes_read;

	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		map_error("Memory allocation failed");
	map->fd = open(filename, O_RDONLY);
	if (map->fd == -1)
		map_error("Cannot open file");
	bytes_read = read(map->fd, map->buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		map_error("Error reading file or file is empty");
	process_map_data(map, bytes_read);
	return (map);
}

t_map	*init_map_from_string(char *input, size_t size)
{
	t_map	*map;
	char	*newline;
	size_t	first_line_len;
	size_t	i;

	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		map_error("Memory allocation failed");
	newline = my_memchr(input, '\n', size);
	if (!newline)
		map_error("Invalid map format");
	first_line_len = newline - input;
	parse_first_line(map, input, first_line_len);
	map->grid = (char *)malloc(size - first_line_len);
	if (!map->grid)
		map_error("Memory allocation failed");
	i = 0;
	while (i < size - first_line_len - 1)
	{
		map->grid[i] = input[first_line_len + 1 + i];
		i++;
	}
	map->grid[size - first_line_len - 1] = '\0';
	return (populate_map_dimensions(map));
}
