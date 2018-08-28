/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_stack_border.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 02:33:57 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:34:05 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	draw_stack_border(t_vis *vis, t_vis_rect stat)
{
	t_vis_rect	box;

	box.width = 3;
	box.height = (stat.height * stat.width) + 10;
	box.x = stat.x;
	box.y = stat.y;
	draw_rect(vis, &box, 0xFFFFFF);
	box.x += 6 + stat.height + (stat.height * stat.width);
	draw_rect(vis, &box, 0xFFFFFF);
	box.x = stat.x;
	box.height = 3;
	box.width = 9 + stat.height + (stat.height * stat.width);
	draw_rect(vis, &box, 0xFFFFFF);
	box.y += (stat.height * stat.width) + 2 + stat.y;
	draw_rect(vis, &box, 0xFFFFFF);
}
