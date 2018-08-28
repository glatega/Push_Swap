/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:57:32 by glatega           #+#    #+#             */
/*   Updated: 2018/08/24 13:57:46 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_flags		*check_for_flags(char **args)
{
	t_flags		*flags;
	int			i;

	flags = (t_flags*)ft_memalloc(sizeof(t_flags));
	i = 0;
	while (args[i] != NULL)
	{
		if (ft_strcmp(args[i], "-v") == 0)
		{
			flags->v = 1;
			flags->total++;
		}
		if (ft_strcmp(args[i], "-f") == 0)
		{
			flags->f = 1;
			flags->total++;
		}
		if (ft_strcmp(args[i], "-c") == 0)
		{
			flags->c = 1;
			flags->total++;
		}
		i++;
	}
	return (flags);
}
