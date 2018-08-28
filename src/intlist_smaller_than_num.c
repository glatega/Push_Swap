/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlist_smaller_than_num.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:18:26 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:27:14 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		intlist_smaller_than_num(t_intlist *list, int num)
{
	int		small;

	small = -2147483648;
	while (list != NULL)
	{
		if (list->num < num && list->num > small)
			small = list->num;
		list = list->next;
	}
	return (small);
}
