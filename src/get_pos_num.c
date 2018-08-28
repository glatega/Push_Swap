/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 19:08:44 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 20:55:52 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_pos_num(t_intlist *intlist, int num)
{
	t_intlist	*list;
	int			neighbor;
	int			moves;

	moves = 0;
	list = intlist;
	neighbor = intlist_smaller_than_num(intlist, num);
	if (neighbor == -2147483648)
	{
		neighbor = intlist_bigger_than_num(intlist, num);
		moves++;
	}
	while (list->num != neighbor)
	{
		moves++;
		list = list->next;
	}
	if (moves == list_length(intlist))
		moves = 0;
	return (moves);
}
