/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:21:30 by lmatkows          #+#    #+#             */
/*   Updated: 2024/07/20 12:25:46 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar02(int x1, int y1, int x, int y)
{
	if (((x1 == 0) || (x1 == x)) && (y1 == 0))
		write (1, "A", 1);
	else
	{
		if (((x1 == 0) || (x1 == x)) && (y1 == y))
			write(1, "C", 1);
		else
		{
			if (((y1 != 0) && (y1 != y)) && (x1 != 0) && (x1 != x))
				write (1, " ", 1);
			else
				write (1, "B", 1);
		}
	}
}

void	rush02(int x, int y)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 0;
	x = x - 1;
	y = y - 1;
	while (iy <= y)
	{
		ix = 0;
		while (ix <= x)
		{
			ft_putchar02 (ix, iy, x, y);
			ix = ix + 1;
		}
		write (1, "\n", 1);
		iy = iy + 1;
	}
}
