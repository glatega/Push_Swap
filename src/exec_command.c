/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:12:06 by glatega           #+#    #+#             */
/*   Updated: 2018/08/26 18:46:29 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_command(char *str, t_intlist **a_list, t_intlist **b_list)
{
	if (ft_strcmp(str, "sa") == 0)
		command_sa(a_list);
	else if (ft_strcmp(str, "sb") == 0)
		command_sb(b_list);
	else if (ft_strcmp(str, "ss") == 0)
		command_ss(a_list, b_list);
	else if (ft_strcmp(str, "pa") == 0)
		command_pa(a_list, b_list);
	else if (ft_strcmp(str, "pb") == 0)
		command_pb(a_list, b_list);
	else if (ft_strcmp(str, "ra") == 0)
		command_ra(a_list);
	else if (ft_strcmp(str, "rb") == 0)
		command_rb(b_list);
	else if (ft_strcmp(str, "rr") == 0)
		command_rr(a_list, b_list);
	else if (ft_strcmp(str, "rra") == 0)
		command_rra(a_list);
	else if (ft_strcmp(str, "rrb") == 0)
		command_rrb(b_list);
	else if (ft_strcmp(str, "rrr") == 0)
		command_rrr(a_list, b_list);
}
