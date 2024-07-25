/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:38:06 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/25 14:03:04 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nb(int b)
{
	write(1, &b, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
	}
	print_nb(nb % 10 + 48);
}
