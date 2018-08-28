/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:26:19 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 00:45:43 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_rb(t_intlist **b_list, int num)
{
	int		count;

	count = 0;
	while (count < num)
	{
		command_rb(b_list);
		ft_putstr("rb\n");
		count++;
	}
}
