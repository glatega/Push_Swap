/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo_rra_rrb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:24:13 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:57:28 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		combo_rra_rrb(t_intlist *a_list, t_intlist *b_list, t_intlist *node)
{
	int		moves;
	int		len;
	int		b;

	len = list_length(a_list);
	moves = 0;
	while (a_list != node && ++moves)
		a_list = a_list->next;
	if (moves != 0)
		moves = len - moves;
	len = list_length(b_list);
	b = get_pos_num(b_list, node->num);
	if (b != 0)
		b = len - b;
	if (b > moves)
		moves = b;
	return (moves);
}
