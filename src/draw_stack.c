/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:03:04 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:03:11 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	draw_stack(t_intlist *list, t_flags *flags, t_vis *vis, t_vis_rect stat)
{
	t_vis_rect	box;
	int			colour;

	colour = 0xFFFFFF;
	if (flags->v == 1)
		box.width = 3;
	draw_stack_border(vis, stat);
	box.width = stat.width;
	box.x = stat.x + 5;
	while (list != NULL)
	{
		box.y = (stat.height - list->rank) * stat.width + 5 + stat.y;
		box.height = stat.width * list->rank;
		if (flags->c == 1)
			colour = get_gyr_colour(stat.ints, list->rank);
		draw_rect(vis, &box, colour);
		box.x += 1 + stat.width;
		list = list->next;
	}
}
