/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:59:32 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/25 09:41:49 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = -1;
	while (str[i] && to_find[i])
	{
		i++;
		if (!(str[i] == to_find[i]))
		{
			return (i);
			i++;
		}
	}
	return ('\0');
}
