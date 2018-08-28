/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:07:50 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:07:58 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	run_commands(t_commands *commands, t_flags *flags, t_intlist **a_list)
{
	t_intlist	*b_list;

	rank_list(*a_list);
	b_list = NULL;
	if (validate_commands(commands))
	{
		if (flags->v == 1)
			visualizer(commands, flags, *a_list, b_list);
		else
		{
			while (commands != NULL)
			{
				exec_command(commands->cmd, a_list, &b_list);
				commands = next_command(commands);
			}
			check_ok(*a_list, b_list);
		}
	}
	else
		ft_putstr("Error\n");
}
