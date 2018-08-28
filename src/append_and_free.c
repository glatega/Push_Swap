/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_and_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 00:54:33 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:07:16 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*append_and_free(char *old, char *add)
{
	char	*line;
	char	*f_old;
	char	*f_add;
	int		i;

	i = 0;
	f_old = old;
	f_add = add;
	line = ft_strnew(ft_strlen(old) + ft_strlen(add) + 1);
	while (*old)
		line[i++] = *old++;
	while (*add)
		line[i++] = *add++;
	line[i++] = ' ';
	line[i] = '\0';
	free(f_old);
	free(f_add);
	return (line);
}
