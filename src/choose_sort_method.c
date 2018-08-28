/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sort_method.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 02:15:27 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:15:37 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_sort_method(t_intlist **a_list)
{
	t_intlist	*b_list;

	b_list = NULL;
	if (list_length(*a_list) <= 5)
		small_sort(a_list, &b_list);
	else
	{
		command_pb(a_list, &b_list);
		ft_putstr("pb\n");
		while (list_length(*a_list) != 0)
			sort_next(a_list, &b_list);
		arrange_b(&b_list);
		push_all_a(a_list, &b_list);
	}
}
