/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_ra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:25:51 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 00:45:39 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_ra(t_intlist **a_list, int num)
{
	int		count;

	count = 0;
	while (count < num)
	{
		command_ra(a_list);
		ft_putstr("ra\n");
		count++;
	}
}
