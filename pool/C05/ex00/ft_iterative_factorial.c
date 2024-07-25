/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:09:47 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/25 11:40:29 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb != 0)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}