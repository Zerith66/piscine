/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:03:55 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/07 22:03:30 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*bzero(char *str, unsigned int n)
{
	int	i;

	i = 0;
	while (str[i] && i <= n)
		str[i] = "\0";
	return (str);
}