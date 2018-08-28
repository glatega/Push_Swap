/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlist_bigger_than_num.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 19:16:45 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 19:19:11 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		intlist_bigger_than_num(t_intlist *list, int num)
{
	int		big;

	big = 2147483647;
	while (list != NULL)
	{
		if (list->num > num && list->num < big)
			big = list->num;
		list = list->next;
	}
	return (big);
}
