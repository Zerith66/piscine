/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:52:54 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/07 16:12:44 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen (char *str)
{
	int i;

	i = -1;
	while (str[++i]);
	return (i);	
}

char	*verif(char *str)
{
	int		i;
	int		j;
	char	*dest;

	dest = malloc(ft_strlen(*str) * sizeof(char) + 1);
	i = 0;
	j = 0;
	if (str[i] == "")
		return (NULL);
	while (str[i])
	{
		if (str[i] == "\0")
			i++;
		else
		{
			dest[j] = str[i];
			j++;
		}
	}
	return (dest);
}

char    **ft_split(char *str, char *charset)
{
	int i;
	int j;
	int a;
	char **splited;

	i = 0;
	a = 0;
	while (str[i])
	{
		j = -1;
		while (charset[++j])
		{
			if (charset[j] == str[i])
			{
				j = -1;
				while (++j != i)
				{
					
				}
				 
			}
		}
	}
}

int main (int ac, char **av)
{
	
}
