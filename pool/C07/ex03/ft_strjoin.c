/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 00:46:15 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/08 19:56:52 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str++)
		cnt++;
	return (cnt);
}

int	ft_get_size_total(int size, char **strs, char *sep)
{
	int	total;
	int	size_sep;

	size_sep = 0;
	if (!size)
		return (0);
	if (sep)
		size_sep = ft_strlen(sep);
	if (strs)
		total = ft_strlen(*strs++);
	while (--size && strs)
		total += ft_strlen(*strs++) + size_sep;
	return (total);
}

void	do_join(int size, char **strs, char *sep, char *ret)
{
	char	*act;
	char	*root_sep;

	root_sep = sep;
	act = NULL;
	if (strs)
		act = *strs++;
	if (act)
		while (*act)
			*ret++ = *act++;
	while (--size && act)
	{
		if (strs)
			act = *strs++;
		if (sep)
		{
			while (*sep)
				*ret++ = *sep++;
			sep = root_sep;
		}
		if (act)
			while (*act)
				*ret++ = *act++;
	}
	*ret = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;

	ret = malloc(ft_get_size_total(size, strs, sep) + 1);
	*ret = 0;
	if (!ret)
	{
		return (NULL);
	}
	if (strs || sep)
		do_join(size, strs, sep, ret);
	return (ret);
}
