/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlist_smallest_num.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 16:08:22 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 16:09:24 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		intlist_smallest_num(t_intlist *list)
{
	int		smallest;

	smallest = list->num;
	while (list != NULL)
	{
		if (list->num < smallest)
			smallest = list->num;
		list = list->next;
	}
	return (smallest);
}
