/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:32:22 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/27 15:41:01 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define X 6

int mess_error(char *str);
int	only_num(char *str);
int ft_strlen(char *str);

char gen_map(char **av)
{
	int i;
	char *tab;
	char *tabtmp;

	i = 0;
	tabtmp = av[1];
	only_num(tabtmp);
	while (tabtmp[i])
	{
		if (!(i <= ft_strlen(tabtmp) / 2))
		{
			if (tabtmp != " ")
			{
				tab[i] = tabtmp[i];
				i++;
			}
			else
				i++;
		}
		else
			mess_error("please make a valide board");
	}
	set_tab( );
}
