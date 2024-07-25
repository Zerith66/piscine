/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 05:17:04 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/24 13:50:01 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2) {
    int i = 0;

    while (s1[i] || s2[i]) 
	{
        if (s1[i] != s2[i])
		{
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    return 0;
}