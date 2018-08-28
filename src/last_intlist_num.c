/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_intlist_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:20:02 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:27:46 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		last_intlist_num(t_intlist *list)
{
	int		num;

	while (list != NULL)
	{
		num = list->num;
		list = list->next;
	}
	return (num);
}
