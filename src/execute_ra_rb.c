/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_ra_rb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:29:05 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:14:16 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_ra_rb(int a, int b, t_intlist **a_list, t_intlist **b_list)
{
	if (a < b)
	{
		execute_rr(a_list, b_list, a);
		execute_rb(b_list, b - a);
	}
	else
	{
		execute_rr(a_list, b_list, b);
		execute_ra(a_list, a - b);
	}
	command_pb(a_list, b_list);
	ft_putstr("pb\n");
}
