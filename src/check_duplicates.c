/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 22:54:14 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:38:30 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_duplicates(t_intlist *list)
{
	t_intlist	*node;

	if (list == NULL)
		return (1);
	while (list->next != NULL)
	{
		node = list->next;
		while (node != NULL)
		{
			if (node->num == list->num)
				return (1);
			node = node->next;
		}
		list = list->next;
	}
	return (0);
}
