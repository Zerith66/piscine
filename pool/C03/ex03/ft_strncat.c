/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:03:36 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/28 08:13:32 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*r;
	unsigned int	i;

	r = dest;
	i = -1;
	while (*dest)
		dest++;
	while (*src && ++i < nb)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (r);
}
