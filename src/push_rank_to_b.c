/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rank_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 23:58:34 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:30:49 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_rank_to_b(t_intlist **a_list, t_intlist **b_list, int rank)
{
	int			i;
	t_intlist	*al;

	i = 0;
	al = *a_list;
	while (al->rank != rank)
	{
		i++;
		al = al->next;
	}
	if (i <= (list_length(*a_list) / 2))
		execute_ra(a_list, i);
	else
		execute_rra(a_list, (list_length(*a_list) - i));
	command_pb(a_list, b_list);
	ft_putstr("pb\n");
}
