/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 05:49:52 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/19 08:24:23 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char*txt)
{
	size_t	i;

	i = 0;
	while (txt[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	printf("len = %zu\n", ft_strlen("Hello world"));
	return (0);
}*/