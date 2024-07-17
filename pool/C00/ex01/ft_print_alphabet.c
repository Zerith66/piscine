/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:55:28 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/17 13:54:06 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		c++;
	}
}

/*void main(void)

{
	ft_print_alphabet();
}
*/