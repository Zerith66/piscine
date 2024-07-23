/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:21:30 by lmatkows          #+#    #+#             */
/*   Updated: 2024/07/21 16:49:37 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_tab02(int x1, int y1, int x, int y)
{
	if (((x1 == 1) || (x1 == x)) && (y1 == 1))
		ft_putchar ('A');
	else
	{
		if (((x1 == 1) || (x1 == x)) && (y1 == y))
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

void	rush02(int x, int y)
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
			ft_write_tab02 (ix, iy, x, y);
			ix = ix + 1;
		}
		write (1, "\n", 1);
		iy = iy + 1;
	}
}
