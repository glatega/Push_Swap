/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_ra_rrb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:30:11 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 00:45:35 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_ra_rrb(int a, int b, t_intlist **a_list, t_intlist **b_list)
{
	execute_ra(a_list, a);
	execute_rrb(b_list, b);
	command_pb(a_list, b_list);
	ft_putstr("pb\n");
}
