/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:02:07 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:02:15 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		key_hooks(int hook, void *param)
{
	t_params		*p;

	p = param;
	if (hook == 53)
	{
		mlx_destroy_window(p->vis->ptr, p->vis->win);
		free_params(p);
		free(p);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
