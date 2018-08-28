/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo_rra_rb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:23:37 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:57:08 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		combo_rra_rb(t_intlist *a_list, t_intlist *b_list, t_intlist *node)
{
	t_intlist	*al;
	int			moves;

	al = a_list;
	moves = 0;
	while (al != node && ++moves)
		al = al->next;
	if (moves != 0)
		moves = list_length(a_list) - moves;
	moves += get_pos_num(b_list, node->num);
	return (moves);
}
