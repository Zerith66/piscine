/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmicaell <vmicaell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:41:56 by vmicaell          #+#    #+#             */
/*   Updated: 2024/08/07 22:13:18 by vmicaell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <setjmp.h>

# define BUFFER_SIZE 1048576 // 1MB buffer

#define MAX_ERROR_LEN 256

typedef struct s_exception {
    int code;
    char message[MAX_ERROR_LEN];
} t_exception;

extern jmp_buf exception_buf;
extern t_exception current_exception;

void throw_exception(int code, const char *message);

typedef struct s_map
{
	size_t	rows;
	size_t	cols;
	char	empty;
	char	obstacle;
	char	fill;
	char	*grid;
	int		fd;
	size_t	file_size;
	char	buffer[BUFFER_SIZE];
}	t_map;

typedef struct s_square
{
	size_t	size;
	size_t	row;
	size_t	col;
}	t_square;

void throw_exception(int code, const char *message);

size_t		ft_strlen(const char *str);
char		*my_strncpy(char *dest, const char *src, size_t n);
void		map_error(const char *message);
size_t		min(size_t a, size_t b, size_t c);
char		*my_memchr(const char *s, int c, size_t n);
size_t		my_strtoul(const char *str, char **endptr);

t_map		*init_map(const char *filename);
void		free_map(t_map *map);
void		print_map(t_map *map);

t_square	find_largest_square(t_map *map);
void		fill_square(t_map *map, t_square square);

void		solve_map(const char *filename);
void		print_map(t_map *map);
t_map		*init_map_from_string(char *input, size_t size);
t_map		*populate_map_dimensions(t_map *map);

#endif
