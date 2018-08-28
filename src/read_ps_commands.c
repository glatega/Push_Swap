/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_ps_commands.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:13:39 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:51:26 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_commands	*read_ps_commands(void)
{
	t_commands	*start;
	t_commands	*node;
	char		*line;

	start = NULL;
	if (get_next_line(0, &line) > 0)
	{
		start = (t_commands*)ft_memalloc(sizeof(t_commands));
		start->cmd = ft_strdup(line);
		free(line);
		while (get_next_line(0, &line) > 0)
		{
			node = start;
			while (node->next != NULL)
				node = node->next;
			node->next = (t_commands*)ft_memalloc(sizeof(t_commands));
			node->next->cmd = ft_strdup(line);
			free(line);
		}
		free(line);
	}
	return (start);
}
