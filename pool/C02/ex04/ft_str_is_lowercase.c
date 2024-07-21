/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 03:54:36 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/21 06:34:42 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\n')
	{
		if (*str >= 97 && *str <= 122)
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
		return (1);
	}
}
