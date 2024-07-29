/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:59:32 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/29 14:34:24 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	if (!*str)
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (&str[i]);
		i++;
		if (!str[i])
			return (NULL);
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(int ac, char **av) {
	(void)ac;
	printf("%s\n", ft_strstr(av[1], av[2]));
	return 0;
}*/
