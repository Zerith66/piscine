/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmicaell <vmicaell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:01:50 by vmicaell          #+#    #+#             */
/*   Updated: 2024/08/06 15:08:14 by vmicaell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	update_max_square(t_square *max_square,
			size_t size, size_t i, size_t j)
{
	max_square->size = size;
	max_square->row = i;
	max_square->col = j;
}

static size_t	calculate_dp_value(size_t prev, size_t *dp, size_t j)
{
	size_t	left;

	if (j > 0)
		left = dp[j - 1];
	else
		left = 0;
	return (min(prev, dp[j], left) + 1);
}

static void	process_row(t_map *map, size_t *dp, t_square *max_square, size_t i)
{
	size_t	j;
	size_t	prev;
	size_t	temp;

	j = 0;
	prev = 0;
	while (j < map->cols)
	{
		temp = dp[j];
		if (map->grid[i * (map->cols + 1) + j] == map->empty)
		{
			dp[j] = calculate_dp_value(prev, dp, j);
			if (dp[j] > max_square->size)
				update_max_square(max_square, dp[j], i, j);
		}
		else
			dp[j] = 0;
		prev = temp;
		j++;
	}
}

t_square	find_largest_square(t_map *map)
{
	size_t		*dp;
	t_square	max_square;
	size_t		i;

	dp = (size_t *)calloc(map->cols, sizeof(size_t));
	if (!dp)
		map_error("Memory allocation failed for dp array");
	max_square.size = 0;
	max_square.row = 0;
	max_square.col = 0;
	i = 0;
	while (i < map->rows)
	{
		process_row(map, dp, &max_square, i);
		i++;
	}
	free(dp);
	return (max_square);
}

void	fill_square(t_map *map, t_square square)
{
	size_t	start_row;
	size_t	start_col;
	size_t	i;
	size_t	j;

	start_row = square.row - square.size + 1;
	start_col = square.col - square.size + 1;
	i = start_row;
	while (i <= square.row)
	{
		j = start_col;
		while (j <= square.col)
		{
			map->grid[i * (map->cols + 1) + j] = map->fill;
			j++;
		}
		i++;
	}
}
