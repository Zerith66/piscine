/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:47:02 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/20 12:09:14 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putlim(int *b, int *i);

void	ft_putlim(int *b, int *i);

void	rush(int *a, int *b)
{
	int	*i;

	*i = &b;
	while (i >= 1)
	{
		if (*i == 0 || *i == *b)
		{
			ft_putchar(*a, *b, *i);
			i--;
		}
		while (*i != *b - 1)
		{
			ft_putlim(*b, *i);
		}
		*i--;
	}
}
