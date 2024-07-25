/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:09:59 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/25 16:29:00 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbint;

	sign = 0;
	i = 0;
	nbint = 0;
	while (!(8 < str[i] < 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		nbint = nbint * 10 + (str[i] - 48);
		i++;
	}
	return (sign * nbint);
}
