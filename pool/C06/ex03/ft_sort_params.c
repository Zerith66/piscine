/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:20:50 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/01 15:08:01 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *tri(char **liste)
{
	char **trie;
	int i;
	int j;

	i = 0;
	j = 0;
	while (liste[i])
	{
		while (trie[j])
		{
			
		}
		i++;
	}
	
}

int main (int ac, char **av)
{
	int i;
	char **triee;

	i = ac;
	triee = tri(**av);
	while (i > 1)
	{
		write(1, av[i], ft_strlen(av[i]));
		i--;
	}
	return(0);
}
