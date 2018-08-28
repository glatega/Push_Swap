/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:10:31 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:16:52 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_rrb(t_intlist **b_list)
{
	t_intlist	*first;
	t_intlist	*prev;
	t_intlist	*node;

	first = *b_list;
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
		*b_list = node;
	}
}
