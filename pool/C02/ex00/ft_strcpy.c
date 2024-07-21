/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:11:16 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/20 18:59:04 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src != "\0")
	{
		dest[i] = src[i];
		i++;
	}
	return (*dest);
}

/*int main(void)
{
	ft_strcpy("F", "S");
	return (0);
}*/