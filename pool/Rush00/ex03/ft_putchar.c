/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:01:02 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/20 09:08:10 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int *a, int *b, int *i)
{
	int	o;

	o = 0;
	if (*a > 1)
	{
		write(1, "A", 1);
		o++;
		while (o <= *a - 1)
		{
			write(1, "B", 1);
			o++;
		}
		write(1, "A", 1);
	}
	else
	{
		write(1, "A", 1);
	}
}

void	ft_putlim(int *b, int *i)
{
	int	l;

	l = 0;
	if (*b == 0)
	{
		write(1, "B", 1);
		l++;
	}
	while (l < *b - 1)
	{
		write(1, " ", 1);
		l++;
	}
	if (l + 1 == *b)
	{
		write(1, "B", 1);
	}
}
