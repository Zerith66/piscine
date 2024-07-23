/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 08:19:10 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/23 14:16:41 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef bsq.h
#define bsq.h

#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

typedef struct gen_map
{
	int x;
	int y;
	char    vide;
	char    obstacle;
}			gen_map;
	
int ft_strlen(char*txt);
int map_error(char *message);
#endif