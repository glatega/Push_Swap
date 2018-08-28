/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:27:18 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:26:54 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_rra(t_intlist **a_list, int num)
{
	int		count;

	count = 0;
	while (count < num)
	{
		command_rra(a_list);
		ft_putstr("rra\n");
		count++;
	}
}
