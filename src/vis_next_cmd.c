/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vis_next_cmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:05:40 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:05:49 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		vis_next_cmd(void *param)
{
	t_params	*p;

	p = param;
	if (p->cmd == NULL)
	{
		if (p->flags->v == 1)
		{
			check_ok(p->a_list, p->b_list);
			p->flags->v = 0;
		}
	}
	else
	{
		exec_command(p->cmd->cmd, &(p->a_list), &(p->b_list));
		mlx_clear_window(p->vis->ptr, p->vis->win);
		p->cmd = next_command(p->cmd);
		p->box->x = 5;
		draw_stack(p->a_list, p->flags, p->vis, *(p->box));
		p->box->x += ((p->box->width * p->box->ints) + p->box->ints + 7);
		draw_stack(p->b_list, p->flags, p->vis, *(p->box));
	}
	return (1);
}
