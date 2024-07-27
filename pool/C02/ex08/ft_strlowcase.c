/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:23:37 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/27 23:11:47 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*int main(void)
{
	ft_strupcase("HELLO WORLD");
	return (0);
}*/