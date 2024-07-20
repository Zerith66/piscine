/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:47:02 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/20 11:45:35 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putlim(int *b, int *i);
void	ft_putchar(int *a, int *b, int *i);

void	rush(int *a, int *b)
{
	int	*i;

	i = b;
	while (*i >= 1)
	{
		if (*i == 0 || *i == *b)
		{
			ft_putchar(a, b, i);
			i--;
		}
		while (*i != *b - 1)
		{
			ft_putlim(b, i);
		}
		*i = *i - 1;
	}
}
