/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:30:48 by lmatkows          #+#    #+#             */
/*   Updated: 2024/07/21 22:06:22 by qdominoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush00(int x1, int y1);
void	rush01(int x1, int y1);
void	rush02(int x1, int y1);
void	rush03(int x1, int y1);
void	rush04(int x1, int y1);
void	ft_putchar(char c);

int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 5;
	if ((x <= 0) || (y <= 0) || (x > 2147483647) || (y > 2147483647))
		write (1, "ERROR", 5);
	else
	{
		write (1, "Rush 02 :\n\n", 11);
		rush02(x, y);
		write (1, "\n", 1);
		write (1, "Bonus rush 00 :\n\n", 17);
		rush00(x, y);
		write (1, "\n", 1);
		write (1, "Bonus rush 01 :\n\n", 17);
		rush01(x, y);
		write (1, "\n", 1);
		write (1, "Bonus rush 03 :\n\n", 17);
		rush03(x, y);
		write (1, "\n", 1);
		write (1, "Bonus rush 04 :\n\n", 17);
		rush04(x, y);
		write (1, "\n", 1);
	}
}
