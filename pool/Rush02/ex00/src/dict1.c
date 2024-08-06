/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:14:09 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 16:57:06 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "uti.h"
#include <stdlib.h>
#include <stdio.h>

void	dict_set_error(t_dict *dict, int err)
{
	int	i;

	i = 0;
	while (i < dict->len)
	{
		free(dict->values[i].number);
		free(dict->values[i].number_letter);
		i++;
	}
	free(dict->values);
	dict->len = err;
}

int	check_dict_line(char *text)
{
	int	i;

	i = 0;
	if (!ft_is_digit(text[i]))
		return (-1);
	while (ft_is_digit(text[i]))
		i++;
	if (text[i] != ' ' && text[i] != ':')
		return (-2);
	while (text[i] == ' ')
		i++;
	if (text[i] != ':')
		return (-3);
	i++;
	if (text[i] != ' ' && !ft_is_printable(text[i]))
		return (-4);
	while (text[i] == ' ')
		i++;
	while (ft_is_printable(text[i]))
		i++;
	if (text[i] != '\n' && text[i] != '\0')
		return (-5);
	return (0);
}

int	do_line_dict(char *text, t_dict *dict)
{
	int	end;
	int	i;

	dict->len++;
	dict->values = ft_realloc(
			dict->values,
			sizeof(t_dict_value) * (dict->len - 1),
			sizeof(t_dict_value) * (dict->len)
			);
	end = 0;
	while (ft_is_digit(text[end]))
		end++;
	dict->values[dict->len - 1].number = ft_strndup(text, 0, end);
	i = end;
	while (text[end] == ' ')
		end++;
	end++;
	while (text[end] == ' ')
		end++;
	i = end;
	while (ft_is_printable(text[end]))
		end++;
	dict->values[dict->len - 1].number_letter = ft_strndup(text, i, end);
	return (0);
}

t_dict	parse_dict(char *text)
{
	t_dict	dict;
	int		i;

	dict.len = 0;
	dict.values = malloc(sizeof(t_dict_value));
	i = 0;
	while (text[i] != '\0')
	{
		while (text[i] == '\n')
			i++;
		if (check_dict_line(&text[i]))
		{
			dict_set_error(&dict, check_dict_line(&text[i]));
			return (dict);
		}
		if (do_line_dict(&text[i], &dict))
		{
			dict_set_error(&dict, check_dict_line(&text[i]));
			return (dict);
		}
		while (text[i] != '\n')
			i++;
		i++;
	}
	return (dict);
}
