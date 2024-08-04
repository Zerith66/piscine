/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:54:01 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/03 14:17:52 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void error_message(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (2, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		av[1] numero dictionnaire normal
	else if (ac == 3)
	{
		av[1] dictionaire
		av[2] numero
	}
	
}