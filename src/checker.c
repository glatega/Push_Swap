/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:52:35 by glatega           #+#    #+#             */
/*   Updated: 2018/08/28 06:36:03 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_intlist	*a_list;
	t_flags		*flags;
	char		**args;
	t_commands	*cmds;

	if (ac > 1)
	{
		flags = check_for_flags(++av);
		args = flags->f == 1 ? file_to_string(av) : av;
		a_list = make_intlist(args);
		if (error_check(a_list, args, flags))
			ft_putstr("Error\n");
		else
		{
			cmds = read_ps_commands();
			run_commands(cmds, flags, &a_list);
		}
		if (flags->f == 1)
			free(args);
		free_stack(a_list);
		free(flags);
	}
	return (0);
}
