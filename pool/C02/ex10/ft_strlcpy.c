/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:17:16 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/23 05:44:21 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] && i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= size)
	{
		dest[i] = '\0';
		i++;
	}
	return (*dest);
}

/*int	main(void)
{
	char			dest;
	char			src;
	unsigned int	size;

	dest = "";
	src = "Hello world";
	size = 14;
	ft_strlcpy(&dest, &src, size);
	if (dest == "Hello world   ")
		write(1, "y\n", 2);
	else
		write(1, "n\n", 2);
}*/
