/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:23:37 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/23 03:51:02 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlowcase(char *str)
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