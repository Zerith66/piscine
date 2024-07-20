/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:47:02 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/20 18:39:15 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char *a);

void	rush(int *a, int *b)
{
	int	i;
	int	o;
	
	i = 0;
	o = 0;
	while (o != 0)
	{
		if (i == 0 && o == *a)
		{
			ft_putchar("A");
			i++;
			while (*b - 1 >i)
			{
				ft_putchar("B");
				i++;
			}
			ft_putchar("A");
			o++;
		}
		if (*a > 1 )
		{
			i = *b - 2;
			ft_putchar("B");
			while (*b - 1 >i)
			{
				ft_putchar(" ");
				i--;
			}
			ft_putchar("B");
			o++;
		}
	}
}
