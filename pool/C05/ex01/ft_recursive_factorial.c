/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:34:11 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/28 00:17:58 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(char nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb != 0)
	{
		r = r * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (r);
}
