/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:14:42 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 01:27:04 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_sa(t_intlist **a_list, int num)
{
	int		count;

	count = 0;
	while (count < num)
	{
		command_sa(a_list);
		ft_putstr("sa\n");
		count++;
	}
}
