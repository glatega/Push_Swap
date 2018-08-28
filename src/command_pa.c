/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_pa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:06:43 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 17:16:37 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	command_pa(t_intlist **a_list, t_intlist **b_list)
{
	t_intlist	*la;
	t_intlist	*lb;

	la = *a_list;
	lb = *b_list;
	if (lb != NULL)
	{
		*b_list = lb->next;
		lb->next = la;
		*a_list = lb;
	}
}
