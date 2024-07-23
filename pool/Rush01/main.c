/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:32:37 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/23 16:34:46 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

char gen_map(char *code);

int mess_error(char *str)
{
    int i;
    i = -1;
    while (str[++i])
        write(1, &str[i], 1);
    exit;
}
int main (void)
{
    char *pcond;
    
    pcond = "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7";
    gen_map(pcond);
    return (0);
}
