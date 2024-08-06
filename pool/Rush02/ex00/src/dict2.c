/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:57:18 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 16:58:22 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdlib.h>
#include "uti.h"

t_dict	get_dict(char *dict_path)
{
	char	*text;
	t_dict	res;

	text = read_file(dict_path);
	if (text == NULL)
	{
		res.len = -1;
		return (res);
	}
	res = parse_dict(text);
	free(text);
	return (res);
}

void	free_dict(t_dict dict)
{
	int	i;

	i = 0;
	while (i < dict.len)
	{
		free(dict.values[i].number);
		free(dict.values[i].number_letter);
		i++;
	}
	free(dict.values);
}
