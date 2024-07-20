/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:56:24 by lmatkows          #+#    #+#             */
/*   Updated: 2024/07/20 14:26:03 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_tab01(int x1, int y1, int x, int y)
{
	if (((x1 == 0) || (x1 == x)) && ((y1 == 0) || (y1 == y)))
		ft_putchar ('x');
	else
	{
		if (((x1 == 0) || (x1 == x)) && ((y1 != 0) || (y1 != y)))
			ft_putchar('x');
		else
		{
			if (((y1 == 0) || (y1 == y)) && ((x1 != 0) || (x1 != x)))
				ft_putchar('x');
			else
				ft_putchar('x');
		}
	}
}

void	rush01(int x, int y)
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
			//ft_write_tab01 (ix, iy, x, y);
			write (1, "t", 1);
			ix = ix + 1;
		}
		write (1, "\n", 1);
		iy = iy + 1;
	}
}
