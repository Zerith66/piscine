/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:20:50 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/07 16:25:20 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**tri(char **str)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (str[i])
	{
		j = 2;
		while (str[j])
		{
			if (ft_strcmp(str[j], str[j - 1]) > 0)
			{
				tmp = str[j - 1];
				str[j - 1] = str[j];
				str[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int		i;
	char	**sorted;

	i = ac - 1;
	sorted = tri(av);
	while (i >= 1)
	{
		write(1, sorted[i], ft_strlen(sorted[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
