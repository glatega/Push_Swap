/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 21:47:54 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:27:08 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_sb(t_intlist **b_list, int num)
{
	int		count;

	count = 0;
	while (count < num)
	{
		command_sb(b_list);
		ft_putstr("sb\n");
		count++;
	}
}
