/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:50:23 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 19:01:12 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "rush02.h"
#include <unistd.h>

int	print_tens(char *num, t_dict dict)
{
	char	tmp[3];

	if (num[0] == '1')
	{
		if (dict_search_and_print(num, dict))
			return (1);
	}
	else
	{
		tmp[2] = '\0';
		tmp[1] = '0';
		tmp[0] = num[0];
		if (dict_search_and_print(tmp, dict))
			return (1);
		tmp[1] = '\0';
		tmp[0] = num[1];
		if (num[1] != '0')
		{
			write(1, " ", 1);
			if (dict_search_and_print(tmp, dict))
				return (1);
		}
	}
	return (0);
}

int	print_num_letters(char *num, t_dict dict)
{
	char	tmp[2];

	tmp[1] = '\0';
	if (num[0] != '0')
	{
		tmp[0] = num[0];
		if (dict_search_and_print(tmp, dict))
			return (1);
		write(1, " ", 1);
		if (dict_search_and_print("100", dict))
			return (1);
		if (num[1] != '0' || num[2] != '0')
			write(1, " ", 1);
	}
	if (num[1] != '0')
		return (print_tens(&(num[1]), dict));
	else
	{
		tmp[1] = '\0';
		tmp[0] = num[2];
		return (dict_search_and_print(tmp, dict));
	}
	return (0);
}

int	check_zero(char *num, t_dict dict)
{
	int	i;

	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] != '\0')
			return (0);
	}
	return (dict_search_and_print("0", dict));
}
