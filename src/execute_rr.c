/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:26:51 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 00:45:45 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_rr(t_intlist **a_list, t_intlist **b_list, int num)
{
	int		count;

	count = 0;
	while (count < num)
	{
		command_rr(a_list, b_list);
		ft_putstr("rr\n");
		count++;
	}
}
