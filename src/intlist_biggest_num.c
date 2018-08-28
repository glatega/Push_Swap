/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlist_biggest_num.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:51:30 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 16:09:52 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		intlist_biggest_num(t_intlist *list)
{
	int		biggest;

	biggest = list->num;
	while (list != NULL)
	{
		if (list->num > biggest)
			biggest = list->num;
		list = list->next;
	}
	return (biggest);
}
