/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_ascending.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 00:02:05 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 02:19:31 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_ascending(t_intlist **list)
{
	t_intlist	*a;
	t_intlist	*b;
	t_intlist	*c;

	a = *list;
	b = a->next;
	c = b->next;
	if (a->rank == 1)
	{
		execute_sa(list, 1);
		execute_ra(list, 1);
	}
	else if (a->rank == 3)
	{
		execute_ra(list, 1);
		if (b->rank == 2)
			execute_sa(list, 1);
	}
	else if (a->rank == 2 && b->rank == 1)
		execute_sa(list, 1);
	else
		execute_rra(list, 1);
}
