/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ranked.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 22:50:37 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:39:04 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_ranked(t_intlist *list)
{
	while (list != NULL)
	{
		if (list->rank == 0)
			return (0);
		list = list->next;
	}
	return (1);
}
