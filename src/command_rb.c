/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:08:19 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:16:45 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_rb(t_intlist **b_list)
{
	t_intlist	*lb;
	t_intlist	*last;

	lb = *b_list;
	if (lb != NULL && list_length(lb) > 1)
	{
		*b_list = lb->next;
		last = lb;
		while (last->next != NULL)
			last = last->next;
		last->next = lb;
		lb->next = NULL;
	}
}
