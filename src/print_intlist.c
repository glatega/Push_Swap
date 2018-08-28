/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_intlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:16:06 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 15:39:56 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_intlist(t_intlist *list)
{
	while (list != NULL)
	{
		ft_putnbr(list->num);
		ft_putchar('\t');
		list = list->next;
	}
	ft_putstr("\n");
}
