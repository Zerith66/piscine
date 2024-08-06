/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uti1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:04:04 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 13:15:29 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	*ft_realloc(void *old_ptr, int old_size, int new_size)
{
	void	*new_ptr;
	int		i;

	if (new_size == 0)
	{
		free(old_ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (old_ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(old_ptr);
		return (NULL);
	}
	i = 0;
	while ((old_size < new_size && i < old_size)
		|| (old_size > new_size && i < new_size))
	{
		((unsigned char *)new_ptr)[i] = ((unsigned char *)old_ptr)[i];
		i++;
	}
	free(old_ptr);
	return (new_ptr);
}

char	*stdin_read(void)
{
	char	*res;
	int		i;
	int		malloc_size;
	char	current;

	i = 0;
	malloc_size = 64;
	res = malloc(sizeof(char) * malloc_size);
	if (res == NULL)
		return (NULL);
	while (read(0, &current, 1) > 0 && current != '\n')
	{
		res[i] = current;
		i++;
		if (i >= malloc_size)
		{
			res = ft_realloc(res, malloc_size, malloc_size + 64);
			if (res == NULL)
				return (NULL);
			malloc_size += 64;
		}
	}
	res = ft_realloc(res, malloc_size, sizeof(char) * (i + 1));
	res[i] = '\0';
	return (res);
}

char	*ft_do_realloc(char *ptr, int *old_size, int new_size)
{
	ptr = ft_realloc(ptr, *old_size, new_size);
	if (ptr == NULL)
		return (NULL);
	*old_size = new_size;
	return (ptr);
}

int	ft_open_file(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	return (fd);
}

char	*read_file(char *path)
{
	char	*res;
	int		i;
	int		malloc_size;
	char	current;
	int		fd;

	i = 0;
	malloc_size = 64;
	res = malloc(sizeof(char) * malloc_size);
	if (res == NULL)
		return (NULL);
	fd = ft_open_file(path);
	if (fd == -1)
		return (NULL);
	while (read(fd, &current, 1) > 0)
	{
		res[i] = current;
		i++;
		if (i >= malloc_size)
			res = ft_do_realloc(res, &malloc_size, malloc_size + 64);
	}
	res = ft_realloc(res, malloc_size, sizeof(char) * (i + 1));
	res[i] = '\0';
	close(fd);
	return (res);
}
