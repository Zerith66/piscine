/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:03:32 by tbourill          #+#    #+#             */
/*   Updated: 2024/08/07 21:55:43 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft.h
#define libft.h

int	    ft_atoi(char *nbr);
char	*bzero(char *str, unsigned int n);
char	*ft_calloc(int num);
int	    ft_isalnum(char c);
int	    ft_isalpha(char c);
int	    ft_isascii(unsigned char c);
int	    ft_isdigit(char c);
int	    ft_isprint(char c);



int     ft_strlen(char *str);


#endif