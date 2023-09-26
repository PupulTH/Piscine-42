/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:28:13 by vfresnai          #+#    #+#             */
/*   Updated: 2023/09/24 21:22:44 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

//We limit the file size to 1mo
int	ft_load_file(t_file *file)
{
	char	buffer[4096];
	int		chunk_size;

	file->buffer = malloc(1);
	if (!(file->buffer))
		return (-1);
	file->size = 0;
	*(file->buffer) = 0;
	chunk_size = read(file->fd, buffer, 4096);
	while (chunk_size > 0)
	{
		file->buffer = ft_filecat_dyn(file->buffer, buffer, file->size,
				chunk_size + 1);
		file->size += chunk_size;
		if (!file->buffer)
			return (-1);
		chunk_size = read(file->fd, buffer, 4096);
	}
	if (file->size > 1048576)
		return (-1);
	return (0);
}

int	ft_init_file(t_file *file, char *filename)
{
	file->cursor = 0;
	file->filename = filename;
	file->buffer = 0;
	if (!(file->filename))
		file->fd = STDIN_FILENO;
	else
		file->fd = open(filename, O_RDONLY);
	if (file->fd < 0)
	{
		ft_putstr("Dict Error\n");
		return (-1);
	}
	return (0);
}

int	ft_unload_file(t_file *file)
{
	if (file->fd)
		close(file->fd);
	if (file->buffer)
		free(file->buffer);
	file->size = 0;
	file->fd = 0;
	return (0);
}

char	*ft_filecat_dyn(char *s1, char *s2, int s1_size, int s2_size)
{
	char	*tmp;

	tmp = malloc(s1_size + s2_size + 1);
	if (!tmp)
		return (NULL);
	ft_strncpy(tmp, s1, s1_size);
	ft_strncpy(tmp + s1_size, s2, s2_size);
	free(s1);
	*(tmp + s1_size + s2_size - 1) = 0;
	return (tmp);
}
