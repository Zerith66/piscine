/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:32:05 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/27 17:17:04 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char **create_tab(void) {
    char **tab;
    tab = malloc(sizeof(char *) * 5);
    tab[4] = NULL;
    int i = 0;
    while (i <= 4) {
        tab[i] = malloc(sizeof(char) * 5);
        tab[i][4] = '\0';
    }
    return tab;
}

char select_character(char *str, int k) {
    int i = -1;

    while (str[++i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            k--;
            if (k == 0)
                return (str[i]);
        }
    }
    return '0';
}

void rush(char *str) {
   // char **tab;
    
    //tab = create_tab();
    printf("%c\n", select_character(str, 2));
    // // void *tmp = NULL;
    // tab = malloc(sizeof(char *) * 5);
    // tab[4] = NULL;
    // int i = 0;
    // while (i <= 4) {
    //     tab[i] = malloc(sizeof(char) * 5);
    //     tab[i][4] = '\0';
    // }
    // return tab;
}

int check_charn(char *str) {
    int i = -1;
    int j = 0;
    while (str[++i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (!(str[i] >= '1' && str[i] <= '4'))
                return 0;
            j++;
        }
    }
    return (j);
}

int main(int ac, char **av) {
    if (ac == 2 && check_charn(av[1]) == 16) {
        rush(av[1]);
    }
    return 0;
}