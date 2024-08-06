/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uti3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:07:55 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 18:49:10 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "uti.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_is_space(char c)
{
	if (c == ' ')
		return (1);
	if ('\a' <= c && c <= '\r')
		return (1);
	return (0);
}

void	put_zeroes(char *res, int len, char *num)
{
	int	i;

	res[(len / 3 + 1) * 3] = '\0';
	i = 0;
	while (i < (len / 3 + 1) * 3)
		res[i++] = '0';
	i--;
	len--;
	while (len >= 0)
		res[i--] = num[len--];
}

char	*normalize_num(char *num)
{
	char	*res;
	int		len;

	while (ft_is_space(*num))
		num++;
	if (*num == '-')
		return (NULL);
	if (*num == '+')
		num++;
	while (*num == '0')
		num++;
	len = 0;
	while (num[len])
		len++;
	if (len % 3 == 0)
		return (ft_strdup(num, len));
	res = malloc(sizeof(char) * ((len / 3 + 1) * 3 + 1));
	put_zeroes(res, len, num);
	return (res);
}
