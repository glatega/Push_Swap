/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_combo_ra_rb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:31:24 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:56:32 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_combo_ra_rb(t_intlist **a_list, t_intlist **b_list, t_intlist *node)
{
	int			a;
	int			b;
	t_intlist	*al;

	a = 0;
	b = 0;
	al = *a_list;
	while (al != node)
	{
		a++;
		al = al->next;
	}
	b = get_pos_num(*b_list, node->num);
	execute_ra_rb(a, b, a_list, b_list);
}
