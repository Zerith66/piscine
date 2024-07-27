/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:58:04 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/27 17:08:44 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index < 0)
        return (0);   
    if (index <= 1)
        return (1);
    return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
