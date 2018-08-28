/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rra_rb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:29:37 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 00:45:48 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_rra_rb(int a, int b, t_intlist **a_list, t_intlist **b_list)
{
	execute_rra(a_list, a);
	execute_rb(b_list, b);
	command_pb(a_list, b_list);
	ft_putstr("pb\n");
}
