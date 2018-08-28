/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 23:57:45 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:27:42 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_intlist *a_list)
{
	t_intlist *prev;

	if (list_length(a_list) == 1)
		return (1);
	else
	{
		prev = a_list;
		a_list = a_list->next;
		while (a_list != NULL)
		{
			if (prev->num > a_list->num)
				return (0);
			prev = a_list;
			a_list = a_list->next;
		}
	}
	return (1);
}
