/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:04:09 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:04:17 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_window(t_vis *vis, int ints)
{
	int		block_width;
	int		width;
	int		height;

	block_width = (500 / ints) == 0 ? 1 : (500 / ints);
	width = (((block_width * ints) + ints + 7) * 2) + 12;
	height = (block_width * ints) + 20;
	vis->win = mlx_new_window(vis->ptr, width, height, "Sorting Visualizer");
}
