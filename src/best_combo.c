/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_combo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:24:48 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 00:35:44 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		best_combo(t_intlist *a_list, t_intlist *b_list, t_intlist *node)
{
	int		a;
	int		b;
	int		c;
	int		d;

	a = combo_ra_rb(a_list, b_list, node);
	b = combo_ra_rrb(a_list, b_list, node);
	c = combo_rra_rb(a_list, b_list, node);
	d = combo_rra_rrb(a_list, b_list, node);
	if (a <= b && a <= c && a <= d)
		return (0);
	else if (b <= a && b <= c && b <= d)
		return (1);
	else if (c <= a && c <= b && c <= d)
		return (2);
	else
		return (3);
}
