/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmicaell <vmicaell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 23:52:00 by cguinot           #+#    #+#             */
/*   Updated: 2024/08/07 22:09:36 by vmicaell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

#define STDIN_BUFFER_SIZE 4096

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

static void	read_stdin(char **full_input, size_t *total_size)
{
	char	buffer[BUFFER_SIZE];
	char	*new_input;
	ssize_t	bytes_read;

	bytes_read = read(0, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		new_input = (char *)malloc(*total_size + bytes_read + 1);
		if (!new_input)
			map_error("Memory allocation failed");
		if (*full_input)
		{
			ft_memcpy(new_input, *full_input, *total_size);
			free(*full_input);
		}
		ft_memcpy(new_input + *total_size, buffer, bytes_read);
		new_input[*total_size + bytes_read] = '\0';
		*full_input = new_input;
		*total_size += bytes_read;
		bytes_read = read(0, buffer, BUFFER_SIZE);
	}
	if (bytes_read < 0)
		map_error("Read error");
}

static void	solve_map_from_stdin(void)
{
	t_map		*map;
	t_square	largest_square;
	char		*full_input;
	size_t		total_size;

	full_input = NULL;
	total_size = 0;
	read_stdin(&full_input, &total_size);
	if (total_size == 0)
		map_error("No input provided");
	map = init_map_from_string(full_input, total_size);
	largest_square = find_largest_square(map);
	fill_square(map, largest_square);
	print_map(map);
	free_map(map);
	free(full_input);
}

void	solve_map(const char *filename)
{
	t_map		*map;
	t_square	largest_square;

	map = init_map(filename);
	largest_square = find_largest_square(map);
	fill_square(map, largest_square);
	print_map(map);
	free_map(map);
}

static void	process_single_map(const char *filename)
{
	if (setjmp(exception_buf) == 0)
	{
		solve_map(filename);
	}
	else
	{
		write(2, "Map error: ", 11);
		write(2, current_exception.message,
			ft_strlen(current_exception.message));
		write(2, "\n", 1);
	}
}

static void	process_multiple_maps(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (i > 1)
			write(1, "\n", 1);
		process_single_map(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		if (setjmp(exception_buf) == 0)
			solve_map_from_stdin();
		else
		{
			write(2, "Map error: ", 11);
			write(2, current_exception.message,
				ft_strlen(current_exception.message));
			write(2, "\n", 1);
		}
	}
	else
		process_multiple_maps(argc, argv);
	return (0);
}
