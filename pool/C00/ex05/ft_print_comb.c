/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:20:49 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/18 07:24:43 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(int c, int d, int u)
{
	if (u > d && d > c)
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
		if (c != 55)
		{
			write(1, &", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 0;
	d = 1;
	u = 2;
	while (c != 8)
	{
		if (u == 10)
		{
			u = 0;
			d++;
		}
		if (d == 10)
		{
			d = 0;
			c++;
		}
		if (u != d && u != c && d != c)
		{
			ft_comb(c + 48, d + 48, u + 48);
		}
		u++;
	}
}

void	main(void)
{
	ft_print_comb();
}
