/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmicaell <vmicaell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:30:00 by vmicaell          #+#    #+#             */
/*   Updated: 2024/08/06 15:01:32 by vmicaell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	print_map_chunk(char *buffer, size_t size)
{
	write(STDOUT_FILENO, buffer, size);
}

static void	process_map_row(t_map *map, char *buffer,
						size_t *buffer_index, size_t i)
{
	size_t	j;

	j = 0;
	while (j < map->cols)
	{
		buffer[*buffer_index] = map->grid[i * (map->cols + 1) + j];
		(*buffer_index)++;
		if (*buffer_index == BUFFER_SIZE)
		{
			print_map_chunk(buffer, BUFFER_SIZE);
			*buffer_index = 0;
		}
		j++;
	}
	buffer[*buffer_index] = '\n';
	(*buffer_index)++;
	if (*buffer_index == BUFFER_SIZE)
	{
		print_map_chunk(buffer, BUFFER_SIZE);
		*buffer_index = 0;
	}
}

void	print_map(t_map *map)
{
	char	buffer[BUFFER_SIZE];
	size_t	buffer_index;
	size_t	i;

	buffer_index = 0;
	i = 0;
	while (i < map->rows)
	{
		process_map_row(map, buffer, &buffer_index, i);
		i++;
	}
	if (buffer_index > 0)
		print_map_chunk(buffer, buffer_index);
}
