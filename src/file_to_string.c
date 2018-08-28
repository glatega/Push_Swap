/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 00:52:59 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:14:20 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**file_to_string(char **args)
{
	int		i;
	int		fd;
	char	*gnl;
	char	**line;

	i = 0;
	line = (char**)ft_memalloc(sizeof(char*));
	*line = ft_strnew(0);
	while (args[i] != NULL)
	{
		if (ft_strlen(args[i]) > 4)
			if (ft_strcmp(&args[i][ft_strlen(args[i]) - 4], ".txt") == 0)
				fd = open(args[i], O_RDONLY);
		i++;
	}
	if (fd != -1)
	{
		while (get_next_line(fd, &gnl) > 0)
			*line = append_and_free(*line, gnl);
		free(gnl);
		close(fd);
	}
	line[1] = NULL;
	return (line);
}
