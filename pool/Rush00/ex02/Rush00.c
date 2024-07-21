/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:47:02 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/20 19:51:30 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int a, int b)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (x <= a)
	{
		if (x == 1 || x == a)
		{
			y = 1;
			while (y <= b)
			{
				if (y == 1 || y == b)
				{
					ft_putchar('A');
					y++;
				}
				else
				{
					ft_putchar('B');
					y++;
				}
			}
			ft_putchar('\n');
			x++;
		}
		else
		{
			y = 1;
			while (y <= b)
			{
				if (y == 1 || y == b)
				{
					ft_putchar('B');
					y++;
				}
				else
				{
					ft_putchar(' ');
					y++;
				}
			}
			ft_putchar('\n');
			x++;
		}
	}
}
