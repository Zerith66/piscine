/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 09:42:29 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/28 02:38:04 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int z)
{
	write(1, &z, 1);
}

void	ft_print_comb(int n, int start, int depth, char *number)
{
	int	i;

	i = start;
	if (depth == n)
	{
		write(1, number, n);
		if (number[0] != '9' - n + 1)
			write(1, ", ", 2);
		return ;
	}
	while (i <= '9')
	{
		number[depth] = i;
		ft_print_comb(n, i + 1, depth + 1, number);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	number[10];

	if (n > 0 && n < 10)
		ft_print_comb(n, '0', 0, number);
}
/*int main (void)
{
	ft_print_combn(2);
	return (0);
}*/