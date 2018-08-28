/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:58:05 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:17:16 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_intlist	*a_list;
	t_flags		*flags;
	char		**args;

	if (ac > 1)
	{
		flags = check_for_flags(++av);
		args = flags->f == 1 ? file_to_string(av) : av;
		a_list = make_intlist(args);
		if (!is_sorted(a_list))
			if (!error_check(a_list, args, flags))
				choose_sort_method(&a_list);
		free_stack(a_list);
		free_flags_and_args(&flags, &args);
	}
	return (0);
}
