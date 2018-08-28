/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_intlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 20:34:52 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 07:51:52 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_intlist	*add_intlist(t_intlist *list, int num)
{
	t_intlist	*start;
	t_intlist	*prev;
	t_intlist	*new;

	if (list == NULL)
	{
		list = (t_intlist*)ft_memalloc(sizeof(t_intlist));
		list->num = num;
		return (list);
	}
	start = list;
	prev = list;
	while (prev->next != NULL)
		prev = prev->next;
	new = (t_intlist*)ft_memalloc(sizeof(t_intlist));
	new->num = num;
	prev->next = new;
	return (start);
}
