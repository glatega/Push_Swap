/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo_ra_rrb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:21:37 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:56:45 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		combo_ra_rrb(t_intlist *a_list, t_intlist *b_list, t_intlist *node)
{
	int		moves;
	int		b;

	moves = 0;
	while (a_list != node)
	{
		moves++;
		a_list = a_list->next;
	}
	b = get_pos_num(b_list, node->num);
	if (b != 0)
		b = list_length(b_list) - b;
	moves += b;
	return (moves);
}
