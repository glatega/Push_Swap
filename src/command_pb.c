/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:07:14 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:16:41 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_pb(t_intlist **a_list, t_intlist **b_list)
{
	t_intlist	*la;
	t_intlist	*lb;

	la = *a_list;
	lb = *b_list;
	if (la != NULL)
	{
		*a_list = la->next;
		la->next = lb;
		*b_list = la;
	}
}
