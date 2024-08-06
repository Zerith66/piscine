/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:41:50 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 16:46:37 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

typedef struct s_dict_value
{
	char	*number;
	char	*number_letter;
}	t_dict_value;

typedef struct s_dict
{
	t_dict_value	*values;
	int				len;
}	t_dict;

t_dict	parse_dict(char *text);
t_dict	get_dict(char *dict_path);
void	free_dict(t_dict dict);

#endif
