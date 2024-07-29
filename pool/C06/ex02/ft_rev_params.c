/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:09:21 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/29 13:46:09 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
    int i;

    i = ac - 1;
	if (ac >= 1)
	{
		while (i != 0)
		{
			write(1, av[i], ft_strlen(av[i]));
			write(1, "\n", 1);
            i--;
		}
	}
	return (0);
}