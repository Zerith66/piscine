/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:08:31 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 19:00:24 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include "dict.h"

int	separate_and_print(char *num, t_dict dict);
int	dict_search_and_print(char *num, t_dict dict);
int	print_num_letters(char *num, t_dict dict);
int	check_zero(char *num, t_dict dict);

#endif