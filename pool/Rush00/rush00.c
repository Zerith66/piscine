/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:21:30 by lmatkows          #+#    #+#             */
/*   Updated: 2024/07/20 09:13:32 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_cond(int x1, int y1, int x, int y)
{
	if (((x1 == 0) || (x1 == x)) && ((y1 == 0) || (y1 == y)))
		write (1, "o", 1);
	else
	{
		if (((x1 == 0) || (x1 == x)) && ((y1 != 0) || (y1 != y)))
			write(1, "-", 1);
		else
		{
			if (((y1 == 0) || (y1 == y)) && ((x1 != 0) || (x1 != x)))
				write (1, "|", 1);
			else
				write (1, " ", 1);
		}
	}
}

void	rush00(int x, int y)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 0;
	x = x - 1;
	y = y - 1;
	while (ix <= x)
	{
		iy = 0;
		while (iy <= y)
		{
			write_cond (ix, iy, x, y);
			iy = iy + 1;
		}
		write (1, "\n", 1);
		ix = ix + 1;
	}
}

int	main(void)
{
	rush00(5, 5);
}
