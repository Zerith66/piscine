/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:04:56 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/04 23:50:58 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *nbr)
{
	int	i;
	int	intnbr;
	int	sign;

	i = -1;
	sign = 1;
	while (nbr[++i])
	{
		if (nbr[i] == "-")
			sign = -sign;
		if (nbr[i] >= 48 && nbr[i] <= 57)
			intnbr = intnbr * 10 + (nbr[i] - 48);
	}
	return (intnbr * sign);
}
