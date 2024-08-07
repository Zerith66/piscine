/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmicaell <vmicaell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:22:07 by vmicaell          #+#    #+#             */
/*   Updated: 2024/08/07 09:28:06 by vmicaell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_map(t_map *map)
{
	if (map)
	{
		if (map->grid)
			free(map->grid);
		if (map->fd != -1)
			close(map->fd);
		free(map);
	}
}

t_map	*populate_map_dimensions(t_map *map)
{
	size_t	i;

	map->rows = 0;
	map->cols = 0;
	i = 0;
	while (map->grid[i])
	{
		if (map->grid[i] == '\n')
		{
			map->rows++;
			if (map->cols == 0)
				map->cols = i;
		}
		i++;
	}
	if (map->rows == 0 || map->cols == 0)
		map_error("Invalid map format");
	return (map);
}
