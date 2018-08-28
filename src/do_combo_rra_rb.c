/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_combo_rra_rb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:48:39 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:57:18 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_combo_rra_rb(t_intlist **a_list, t_intlist **b_list, t_intlist *node)
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
	if (a != 0)
		a = list_length(*a_list) - a;
	b = get_pos_num(*b_list, node->num);
	execute_rra_rb(a, b, a_list, b_list);
}
