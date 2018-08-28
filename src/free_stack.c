/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 05:38:02 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 05:38:15 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_intlist *a_list)
{
	t_intlist	*tmp;

	while (a_list != NULL)
	{
		tmp = a_list->next;
		free(a_list);
		a_list = tmp;
	}
}
