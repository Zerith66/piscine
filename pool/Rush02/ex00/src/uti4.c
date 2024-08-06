/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uti4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:43:00 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 18:49:31 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *s, int len)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (len + 1));
	res[len] = '\0';
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
