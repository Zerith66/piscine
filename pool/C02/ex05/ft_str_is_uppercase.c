/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 04:01:21 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/21 06:35:31 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\n')
	{
		if (*str >= 65 && *str <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	if (*str == '\n')
	{
		return (2);
	}
}
