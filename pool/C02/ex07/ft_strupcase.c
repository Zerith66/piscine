/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:27:47 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/25 08:26:48 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (97 <= str[i] <= 122)
		{
			str[i] -= 32;
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