/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:59:51 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/18 08:32:19 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(int a,int b,int c,int d)
{
	write(1, &d, 1);
	write(1, &c, 1);
	write(1, &" ", 1);
	write(1, &b, 1);
	write(1, &a, 1);
	if (d!=58)
	{
		write(1, &", ", 1);
	}
}

void try(int *a,int *b,int *c,int *d)
{
	if (*a == 10)
	{
		*a=0;
		*b++;
	}
	if (*b == 10)
	{
		*b = 0;
		*c++;
	}
	if (*c == 10)
	{
		*c = 0;
		*d++;
	}
}
void	ft_print_comb2(void)
{
	int	tmp;

	tmp=0;
	int *a=&tmp;
	int *b=&tmp;
	int *c=&tmp;
	int *d=&tmp;
	while (*d!=10)
	{
		try(&a,&b,&c,&d);
		print(*a + 48, *b + 48,*c + 48, *d + 48);
		*a++;
	}
}

void main (void)
{
	ft_print_comb2();
}