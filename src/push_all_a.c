/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:52:20 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:30:44 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_all_a(t_intlist **a_list, t_intlist **b_list)
{
	int		len;
	int		i;

	i = 0;
	len = list_length(*b_list);
	while (i < len)
	{
		command_pa(a_list, b_list);
		ft_putstr("pa\n");
		i++;
	}
}
