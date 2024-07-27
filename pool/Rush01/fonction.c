/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:32:20 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/27 16:21:21 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int mess_error(char *str);

char	only_num(char *str, char *dest)
{
	int i;
	int max;

	i = 0;
	max = 32;
	while (str[i])
	{
		if (!(str[i] >= 49 && str[i] <= 53))
		{
			mess_error("please put any numbers in");
		}
		if (max < i)
		{
			dest[i] == str[i];
			i++;
			if (str[i] == ' ')
				i++;
			else
				mess_error("invalide syntaxe");
		}
	}
	return (*dest);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
