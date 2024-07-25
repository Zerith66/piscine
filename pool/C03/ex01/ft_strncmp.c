/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 05:33:01 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/24 13:49:57 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
    int i;
	i = 0;

    while (s1[n] || s2[n]) 
	{
        if (s1[n] != s2[n])
		{
            return (unsigned char)s1[n] - (unsigned char)s2[n];
        }
        i++;
    }
    return 0;
}