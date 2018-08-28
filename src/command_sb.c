/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:05:37 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:16:58 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_sb(t_intlist **b_list)
{
	t_intlist	*prev;
	t_intlist	*node;

	prev = *b_list;
	if (list_length(prev) > 1)
	{
		node = prev->next;
		prev->next = node->next;
		node->next = prev;
		*b_list = node;
	}
}
