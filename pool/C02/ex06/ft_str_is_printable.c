/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 08:11:35 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/25 16:19:40 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(32 <= str[i] && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}
