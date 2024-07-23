/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:56:24 by lmatkows          #+#    #+#             */
/*   Updated: 2024/07/21 16:49:38 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_tab01(int x1, int y1, int x, int y)
{
	if (((x1 == 1) && (y1 == 1)) || ((x1 == x) && (y1 == y)))
		ft_putchar ('/');
	else
	{
		if (((x1 == x) && (y1 == 1)) || ((x1 == 1) && (y1 == y)))
			ft_putchar('\\');
		else
		{
			if (((y1 != 1) && (y1 != y)) && (x1 != 1) && (x1 != x))
				ft_putchar(' ');
			else
				ft_putchar('*');
		}
	}
}

void	rush01(int x, int y)
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
			ft_write_tab01 (ix, iy, x, y);
			ix = ix + 1;
		}
		write (1, "\n", 1);
		iy = iy + 1;
	}
}
