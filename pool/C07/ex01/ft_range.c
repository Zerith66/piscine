/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:31:42 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/31 14:49:57 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = max - min;
	*tab = (int *)malloc(sizeof(max));
	i = 0;
	while (min != max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	free(tab);
}
