/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:01:02 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/20 11:45:47 by hle-hena         ###   ########.fr       */
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
	*a = *b;
	*b = *i;
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
	*i = *i;
}
