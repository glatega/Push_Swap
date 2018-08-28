/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo_ra_rb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:20:45 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:56:06 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		combo_ra_rb(t_intlist *a_list, t_intlist *b_list, t_intlist *node)
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
	if (b > moves)
		moves = b;
	return (moves);
}
