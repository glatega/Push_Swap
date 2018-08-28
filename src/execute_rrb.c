/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:27:51 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:26:59 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_rrb(t_intlist **b_list, int num)
{
	int		count;

	count = 0;
	while (count < num)
	{
		command_rrb(b_list);
		ft_putstr("rrb\n");
		count++;
	}
}
