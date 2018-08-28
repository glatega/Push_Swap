/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fingers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 00:25:41 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 13:54:10 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_fingers(t_intlist **a_list, t_intlist **b_list)
{
	push_rank_to_b(a_list, b_list, 4);
	if (list_length(*a_list) == 4)
		push_rank_to_b(a_list, b_list, 5);
	if (!is_sorted(*a_list))
		sort_three_ascending(a_list);
	while (list_length(*b_list) > 0)
	{
		command_pa(a_list, b_list);
		ft_putstr("pa\n");
	}
	execute_ra(a_list, 1);
	if (list_length(*a_list) == 5)
		execute_ra(a_list, 1);
}
