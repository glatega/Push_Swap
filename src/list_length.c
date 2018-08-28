/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:01:32 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:39:26 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		list_length(t_intlist *list)
{
	int		cnt;

	cnt = 0;
	while (list != NULL)
	{
		list = list->next;
		cnt++;
	}
	return (cnt);
}
