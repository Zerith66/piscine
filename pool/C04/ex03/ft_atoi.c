/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:09:59 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/25 13:49:19 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int sign;

	sign = 0;
	i = 0;
	while (!(8 < str[i] < 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		
		i++;
	}
	
}