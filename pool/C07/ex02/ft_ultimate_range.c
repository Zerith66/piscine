/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 01:03:14 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/08 19:56:15 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = max - min;
	*tab = malloc ((sizeof(int)) * (max - min - 1));
	i = 0;
    if (min >= max)
        return (0);
	if (!tab)
		return (-1);
	while (min != max)
	{
		tab[i] = min;
		min++;
		i++;
	}
    return (tab);
	free(tab);
}
