/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:19:33 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/18 08:25:52 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void pointeur(void)
{
    
    int b = 10;
    int *a = &b;

    printf ("b = %d\n", &a);
}

void main (void)
{
    pointeur();
}