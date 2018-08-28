/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:28:15 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:27:01 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_rrr(t_intlist **a_list, t_intlist **b_list, int num)
{
	int		count;

	count = 0;
	while (count < num)
	{
		command_rrr(a_list, b_list);
		ft_putstr("rrr\n");
		count++;
	}
}
