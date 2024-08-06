/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uti2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:44:32 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 16:54:50 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "uti.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_print_error(char *msg)
{
	int	i;

	i = 0;
	while (msg[i] != '\0')
	{
		write(2, &(msg[i]), 1);
		i++;
	}
}

char	*ft_strndup(char *text, int start, int end)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (end - start + 1));
	res[end - start] = '\0';
	i = start;
	while (i < end)
	{
		res[i - start] = text[i];
		i++;
	}
	return (res);
}

int	ft_is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_is_printable(char c)
{
	return (' ' <= c && c <= '~');
}
