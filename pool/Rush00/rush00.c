/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdominoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:10:57 by qdominoi          #+#    #+#             */
/*   Updated: 2024/07/21 22:11:11 by qdominoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_tab00(int x1, int y1, int x, int y)
{
	if (((x1 == 1) || (x1 == x)) && ((y1 == 1) || (y1 == y)))
		ft_putchar ('o');
	else
	{
		if (((x1 == 1) || (x1 == x)) && ((y1 != 1) || (y1 != y)))
			ft_putchar('|');
		else
		{
			if (((y1 == 1) || (y1 == y)) && ((x1 != 1) || (x1 != x)))
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
	}
}

void	rush00(int x, int y)
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
			ft_write_tab00 (ix, iy, x, y);
			ix = ix + 1;
		}
		write (1, "\n", 1);
		iy = iy + 1;
	}
}