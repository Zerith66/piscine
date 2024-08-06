/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:09:21 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 19:00:52 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "uti.h"
#include <stdlib.h>
#include "rush02.h"
#include <unistd.h>

char	**separate(char *num, int *len)
{
	int		i;
	char	**res;

	*len = 0;
	i = 0;
	while (num[i] != '\0')
		i++;
	i--;
	res = malloc(1);
	while (i >= 0)
	{
		res = ft_realloc(
				res, sizeof(char *) * (*len), sizeof(char *) * (*len + 1));
		(*len)++;
		res[*len - 1] = malloc(sizeof(char) * 4);
		res[*len - 1][0] = num[i - 2];
		res[*len - 1][1] = num[i - 1];
		res[*len - 1][2] = num[i];
		res[*len - 1][3] = '\0';
		i -= 3;
	}
	return (res);
}

int	dict_search_and_print(char *num, t_dict dict)
{
	int	i;

	i = 0;
	while (i < dict.len)
	{
		if (!ft_strcmp(dict.values[i].number, num))
		{
			ft_putstr(dict.values[i].number_letter);
			return (0);
		}
		i++;
	}
	return (1);
}

int	print_unit(int index, t_dict dict)
{
	int		i;
	char	*tmp;
	int		res;

	if (index == 0)
		return (0);
	tmp = malloc(sizeof(char) * (3 * index + 1 + 1));
	tmp[0] = '1';
	i = 1;
	while (i < 3 * index + 1)
	{
		tmp[i++] = '0';
	}
	tmp[i] = '\0';
	write(1, " ", 1);
	res = dict_search_and_print(tmp, dict);
	write(1, " ", 1);
	return (res);
}

void	free_str_arr(char **nums, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(nums[i++]);
	free(nums);
}

int	separate_and_print(char *num, t_dict dict)
{
	char	**nums;
	int		num_len;
	int		i;

	if (check_zero(num, dict))
		return (0);
	nums = separate(num, &num_len);
	i = num_len - 1;
	while (i >= 0)
	{
		if (print_num_letters(nums[i], dict))
		{
			free_str_arr(nums, num_len);
			return (1);
		}
		if (print_unit(i, dict))
		{
			free_str_arr(nums, num_len);
			return (1);
		}
		i--;
	}
	free_str_arr(nums, num_len);
	return (0);
}
