/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rra_rrb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:30:43 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:26:52 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_rra_rrb(int a, int b, t_intlist **a_list, t_intlist **b_list)
{
	if (a < b)
	{
		execute_rrr(a_list, b_list, a);
		execute_rrb(b_list, b - a);
	}
	else
	{
		execute_rrr(a_list, b_list, b);
		execute_rra(a_list, a - b);
	}
	command_pb(a_list, b_list);
	ft_putstr("pb\n");
}
