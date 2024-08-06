/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uti.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:18:35 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 18:47:11 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTI_H
# define UTI_H

void	*ft_realloc(void *old_ptr, int old_size, int new_size);
char	*stdin_read(void);
char	*read_file(char *path);
void	ft_print_error(char *msg);
char	*ft_strndup(char *text, int start, int end);
int		ft_is_digit(char c);
int		ft_is_printable(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*normalize_num(char *num);
char	*ft_strdup(char *s, int len);

#endif