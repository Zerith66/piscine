/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:58:49 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/22 15:57:32 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcapitalize(char *str)
{
	int	i;
	int	m;

	while (str[i])
	{
		if (str[i] == 0 || i == 0)
		{
			i++;
			str[i] -= 32;
		}
		else
			i++;
	}
	return (&str);
}
/*char main(void)
{

	ft_strcapitalize("une phrase sans importance");
	while ()
	{
		
	}
	
}*/