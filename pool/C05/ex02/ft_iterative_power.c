/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 08:19:41 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/28 00:09:32 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power - 1 != 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

/*int main(void)
{
	ft_iterative_power(2,4);
	return (0);
}*/