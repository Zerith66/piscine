/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:32:20 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/23 16:41:28 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int mess_error(char *str);

char	only_num(char *str, char *dest)
{
	int i;
	int max;

	i = 0;
	max = 16;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			mess_error("please put any numbers in");
		}
		i++;
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

