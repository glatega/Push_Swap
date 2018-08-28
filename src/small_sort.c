/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 00:26:56 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:31:36 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_intlist **a_list, t_intlist **b_list)
{
	*b_list = NULL;
	rank_list(*a_list);
	if (list_length(*a_list) == 2)
		execute_sa(a_list, 1);
	else if (list_length(*a_list) == 3)
		sort_three_ascending(a_list);
	else
		sort_fingers(a_list, b_list);
}
