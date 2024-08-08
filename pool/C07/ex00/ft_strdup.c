/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:13:50 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/08 19:52:38 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i]);
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	char	*ret;

	str = (char *)malloc(ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	ret = str;
	while (*src)
		*str++ = *src++;
	*str = 0;
	return (ret);
}
