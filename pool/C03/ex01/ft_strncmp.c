/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 05:33:01 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/23 05:38:12 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (s1[n] || s2[n])
	{
		if (s1[n] == s2[n])
			return (0);
		else if (s1[n])
			return (-1);
		else
			return (1);
	}
}
