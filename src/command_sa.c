/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:04:36 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:16:56 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_sa(t_intlist **a_list)
{
	t_intlist	*prev;
	t_intlist	*node;

	prev = *a_list;
	if (list_length(prev) > 1)
	{
		node = prev->next;
		prev->next = node->next;
		node->next = prev;
		*a_list = node;
	}
}
