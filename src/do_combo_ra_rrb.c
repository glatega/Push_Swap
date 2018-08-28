/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_combo_ra_rrb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:49:17 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:56:54 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_combo_ra_rrb(t_intlist **a_list, t_intlist **b_list, t_intlist *node)
{
	int			a;
	int			b;
	t_intlist	*al;

	a = 0;
	al = *a_list;
	while (al != node)
	{
		a++;
		al = al->next;
	}
	b = get_pos_num(*b_list, node->num);
	if (b != 0)
		b = list_length(*b_list) - b;
	execute_ra_rrb(a, b, a_list, b_list);
}
