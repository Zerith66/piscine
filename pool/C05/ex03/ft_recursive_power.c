/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:43:37 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/27 16:56:27 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;

	res = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power != 0)
	{
		res = res * ft_recursive_power(1, power - 1);
		power--;
	}
	return (res);
}