/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:51:02 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:58:07 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_next(t_intlist **a_list, t_intlist **b_list)
{
	t_sort_stats	*best;
	t_intlist		*node;
	int				moves;

	best = (t_sort_stats*)ft_memalloc(sizeof(t_sort_stats));
	best->moves = 2147483647;
	node = *a_list;
	while (node != NULL)
	{
		moves = best_combo_moves(*a_list, *b_list, node);
		if (moves <= best->moves)
		{
			best->moves = moves;
			best->list = node;
		}
		node = node->next;
	}
	sort_this_num(best, a_list, b_list);
	free(best);
}
