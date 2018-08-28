/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 22:51:53 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:31:29 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank_list(t_intlist *list)
{
	t_intlist	*start;
	t_intlist	*smallist;
	int			rank;
	int			smallest;

	rank = 1;
	start = list;
	while (!is_ranked(start))
	{
		list = start;
		smallest = 2147483647;
		while (list != NULL)
		{
			if (list->num <= smallest && list->rank == 0)
			{
				smallest = list->num;
				smallist = list;
			}
			list = list->next;
		}
		smallist->rank = rank++;
	}
}
