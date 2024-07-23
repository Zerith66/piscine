/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:17:16 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/23 14:25:25 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	while (i <= size - 1)
	{
		
	}
	
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
