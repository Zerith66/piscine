/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 08:11:35 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/21 12:27:55 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] <= 90 || 97 <= str[i] <= 122 || 57 >= str[i] >= 48 )
		{
			return (1);
			i++;
		}
		else
		{
			return (0);
			i++;
		}
	}
	if (*str == '\n')
	{
		return (1);
	}
}