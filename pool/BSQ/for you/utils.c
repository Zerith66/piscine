/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmicaell <vmicaell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:08:55 by vmicaell          #+#    #+#             */
/*   Updated: 2024/08/07 22:13:24 by vmicaell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

size_t	ft_strlen(const char *str)
{
	const char	*s;

	s = str;
	while (*s)
		++s;
	return (s - str);
}

void	map_error(const char *message)
{
	throw_exception(1, message);
}

size_t	min(size_t a, size_t b, size_t c)
{
	size_t	min_val;

	min_val = a;
	if (b < min_val)
		min_val = b;
	if (c < min_val)
		min_val = c;
	return (min_val);
}

char	*my_memchr(const char *s, int c, size_t n)
{
	while (n--)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

size_t	my_strtoul(const char *str, char **endptr)
{
	size_t	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	return (result);
}

char	*my_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
