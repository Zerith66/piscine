/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:31:42 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/08 19:54:39 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	*ret;

	if (min >= max)
		return (NULL);
	max = max - min;
	tab = (int *)malloc(max * sizeof(int));
	ret = tab;
	while (max)
	{
		*tab++ = min++;
		max--;
	}
	return (ret);
	free (tab);
}
