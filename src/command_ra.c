/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_ra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:07:44 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:16:43 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_ra(t_intlist **a_list)
{
	t_intlist	*la;
	t_intlist	*last;

	la = *a_list;
	if (la != NULL && list_length(la) > 1)
	{
		*a_list = la->next;
		last = la;
		while (last->next != NULL)
			last = last->next;
		last->next = la;
		la->next = NULL;
	}
}
