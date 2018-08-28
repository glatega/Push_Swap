/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 02:31:35 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:31:45 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	draw_rect(t_vis *vis, t_vis_rect *box, int colour)
{
	int		h;
	int		w;
	int		x;
	int		y;

	h = 0;
	while (h < box->height)
	{
		w = 0;
		while (w < box->width)
		{
			x = w + box->x;
			y = h + box->y;
			mlx_pixel_put(vis->ptr, vis->win, x, y, colour);
			w++;
		}
		h++;
	}
}
