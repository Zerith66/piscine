/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:54:09 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/20 13:57:41 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_strlen(char*txt)
{
	int	i;

	i = 0;
	while (txt[i] != '\0')
	{
		write (1, txt[i]);
		i++;
	}
}
