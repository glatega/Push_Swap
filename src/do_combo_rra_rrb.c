/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_combo_rra_rrb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:49:57 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:57:43 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_combo_rra_rrb(t_intlist **a_lst, t_intlist **b_lst, t_intlist *node)
{
	int			a;
	int			b;
	t_intlist	*al;

	a = 0;
	al = *a_lst;
	while (al != node)
	{
		a++;
		al = al->next;
	}
	if (a != 0)
		a = list_length(*a_lst) - a;
	b = get_pos_num(*b_lst, node->num);
	if (b != 0)
		b = list_length(*b_lst) - b;
	execute_rra_rrb(a, b, a_lst, b_lst);
}
