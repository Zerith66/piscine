/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:27:47 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/22 15:54:57 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (&str);
}
/*int main(void)
{
	ft_strupcase("HELLO WORLD");
	return (0);
}*/