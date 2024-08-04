/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:48:36 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/03 15:00:33 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"lib.h"

char *ft_atoa(char *nbr)
{
	int i;
	int j;
	char *dest;

	i = 0;
	j = 0;
	while (nbr[i])
	{
		if (nbr[i] == "-" || nbr[i] == ".")
		{
			error_message("Error");
			return (NULL);
		}
		else if (nbr[i] >= 48 && nbr[i] <= 57)
		{
			dest[j] = nbr[i];
			j++;
		}
		i++;
	}
	return (dest);
}
