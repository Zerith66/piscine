/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plateau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:44:08 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/19 11:56:41 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int piece(char *pion, char *tour, char *cav, char *fou, char *dame, char *roi)
{

}

char tableau_a(void)
{
    char *a[8];
    char *b[8];
    char *c[8];
    char *d[8];
    char *e[8];
    char *f[8];
    char *g[8];
    char *h[8];

    *a = (&tour, &cav, &fou, &dame, &roi, &fou, &cav, &tour);
    *b = (&pion*8);
}