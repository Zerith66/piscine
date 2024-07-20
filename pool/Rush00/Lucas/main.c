/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:30:48 by lmatkows          #+#    #+#             */
/*   Updated: 2024/07/20 14:12:10 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x1, int y1);
void	rush01(int x1, int y1);
void	rush02(int x1, int y1);
void	rush03(int x1, int y1);
void	rush04(int x1, int y1);

int	main(void)
{
	int	x;
	int	y;
	
	x = 5;
	y = 6;
	write (1, "Rush 02 :\n", 10);
	rush02(x, y);
	write (1, "\n", 1);
	write (1, "Bonus rush 00 :\n", 16);
	rush00(x, y);
	rush01(x, y);
	rush03(x, y);
	rush04(x, y);
}
