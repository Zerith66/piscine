/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:06:44 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/04 17:44:11 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_calloc(int num)
{
	char	*str;
	int		i;

	i = -1;
	str = malloc(num * sizeof(char));
	if (!(*str));
		return (NULL);
	str[num] = "\0";
	while (str[++i])
		str[i] = "\0";
}
