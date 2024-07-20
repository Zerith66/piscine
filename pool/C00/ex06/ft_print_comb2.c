/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:59:51 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/19 21:40:48 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int z)
{
	write(1, &z, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (b <= 98)
	{
		print(b / 10 + 48);
		print(b % 10 + 48);
		write(1, " ", 1);
		print(a / 10 + 48);
		print(a % 10 + 48);
		if (b != 98)
		{
			write(1, ", ", 2);
		}
		a++;
		if(a == 100 )
		{
			a = b + 2;
			b++;
		}
	}
}

/*int	main(void)
{
	ft_print_comb2();
}
*/