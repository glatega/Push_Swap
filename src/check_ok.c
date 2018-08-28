/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ok.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:12:58 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 14:15:34 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_ok(t_intlist *a_list, t_intlist *b_list)
{
	t_intlist	*prev;
	t_intlist	*node;

	if (list_length(a_list) == 1 && b_list == NULL)
		ft_putstr("OK\n");
	else if (b_list == NULL)
	{
		prev = a_list;
		node = prev->next;
		while (node != NULL)
		{
			if (prev->num > node->num)
			{
				ft_putstr("KO\n");
				return ;
			}
			prev = node;
			node = node->next;
		}
		ft_putstr("OK\n");
	}
	else
		ft_putstr("KO\n");
}
