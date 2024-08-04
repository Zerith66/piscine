/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:04:56 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/04 15:33:04 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *nbr)
{
	int	i;
	int	intnbr;
	int	sign;

	i = 0;
	sign = 1;
	while (nbr[i])
	{
		if (nbr[i] >= 8 && nbr[i] <= 13 || nbr[i] == 32)
			i++;
		if (nbr[i] == "-")
			sign = -sign;
		if (nbr[i] >= 48 && nbr[i] <= 57)
			intnbr = intnbr * 10 + (nbr[i] - 48);
	}
	return (intnbr * sign);
}
