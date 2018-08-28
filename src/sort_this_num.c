/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_this_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:50:28 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:20:37 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_this_num(t_sort_stats *best, t_intlist **a, t_intlist **b)
{
	int		combo;

	combo = best_combo(*a, *b, best->list);
	if (combo == 0)
		do_combo_ra_rb(a, b, best->list);
	else if (combo == 1)
		do_combo_ra_rrb(a, b, best->list);
	else if (combo == 2)
		do_combo_rra_rb(a, b, best->list);
	else
		do_combo_rra_rrb(a, b, best->list);
}
