/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 08:57:55 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 18:54:17 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "rush02.h"
#include "uti.h"
#include <stdio.h>
#include <stdlib.h>

int	converte_number(t_dict dict, char *num)
{
	int	res;

	if (dict.len == -1)
	{
		ft_print_error("Dict Error\n");
		return (1);
	}
	num = normalize_num(num);
	if (num == NULL)
	{
		ft_print_error("Error\n");
		return (1);
	}
	res = separate_and_print(num, dict);
	ft_putstr("\n");
	free_dict(dict);
	free(num);
	return (res);
}

int	main(int argc, char **argv)
{
	char	*input;
	int		res;

	if (argc == 2)
		return (converte_number(get_dict("numbers.dict"), argv[1]));
	else if (argc == 3)
		return (converte_number(get_dict(argv[1]), argv[2]));
	else if (argc == 1)
	{
		input = stdin_read();
		res = converte_number(get_dict("numbers.dict"), input);
		free(input);
		return (res);
	}
	return (0);
}
