/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:51:54 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 00:35:33 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arrange_b(t_intlist **b_list)
{
	t_intlist	*list;
	int			biggest;
	int			i;

	biggest = intlist_biggest_num(*b_list);
	list = *b_list;
	i = 0;
	while (list->num != biggest)
	{
		i++;
		list = list->next;
	}
	if (i > (list_length(*b_list) / 2))
		execute_rrb(b_list, (list_length(*b_list) - i));
	else
		execute_rb(b_list, i);
}
