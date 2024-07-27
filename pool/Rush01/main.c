/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:32:37 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/27 12:20:21 by tbourill         ###   ########.fr       */
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
int main (int ac, char **av)
{
    gen_map(**av);
    return (0);
}
