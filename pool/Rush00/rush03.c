/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:06:17 by lmatkows          #+#    #+#             */
/*   Updated: 2024/07/21 16:49:36 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_tab03(int x1, int y1, int x, int y)
{
	if (((x1 == 1) && (y1 == 1)) || ((x1 == 1) && (y1 == y)))
		ft_putchar ('A');
	else
	{
		if (((x1 == x) && (y1 == 1)) || ((x1 == x) && (y1 == y)))
			ft_putchar('C');
		else
		{
			if (((y1 != 1) && (y1 != y)) && (x1 != 1) && (x1 != x))
				ft_putchar(' ');
			else
				ft_putchar('B');
		}
	}
}

void	rush03(int x, int y)
{
	int	ix;
	int	iy;

	ix = 1;
	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			ft_write_tab03 (ix, iy, x, y);
			ix = ix + 1;
		}
		write (1, "\n", 1);
		iy = iy + 1;
	}
}
