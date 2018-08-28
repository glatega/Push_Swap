/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:06:26 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:06:35 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	visualizer(t_commands *cmd, t_flags *flags, t_intlist *a, t_intlist *b)
{
	t_vis		vis;
	t_vis_rect	box;
	t_params	*param;

	box.ints = list_length(a) + list_length(b);
	box.width = (500 / box.ints) == 0 ? 1 : (500 / box.ints);
	vis.ptr = mlx_init();
	create_window(&vis, box.ints);
	box.x = 5;
	box.y = 5;
	box.height = box.ints;
	draw_stack(a, flags, &vis, box);
	param = (t_params*)ft_memalloc(sizeof(t_params));
	param->a_list = a;
	param->b_list = b;
	param->vis = &vis;
	param->flags = flags;
	param->box = &box;
	param->cmd = cmd;
	mlx_key_hook(vis.win, key_hooks, param);
	mlx_loop_hook(vis.ptr, vis_next_cmd, param);
	mlx_loop(vis.ptr);
}
