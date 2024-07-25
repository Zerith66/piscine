/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 05:33:01 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/25 14:03:06 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i] && i < n)
	{
		if (s1[i] != s2[i] )
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}