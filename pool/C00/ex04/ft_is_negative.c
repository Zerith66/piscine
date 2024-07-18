/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:00:31 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/18 08:08:53 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n * -1 >= 0)
	{
		return ('P');
	}
	else
	{
		return ('N');
	}
}

void main (void)
{
	ft_is_negative(0);
}