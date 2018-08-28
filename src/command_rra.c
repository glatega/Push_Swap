/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:09:33 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:16:50 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_rra(t_intlist **a_list)
{
	t_intlist	*first;
	t_intlist	*prev;
	t_intlist	*node;

	first = *a_list;
	if (first != NULL && list_length(first) > 1)
	{
		node = first;
		while (node->next != NULL)
		{
			prev = node;
			node = node->next;
		}
		node->next = first;
		prev->next = NULL;
		*a_list = node;
	}
}
