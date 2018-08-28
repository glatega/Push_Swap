/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_gyr_colour.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 02:34:53 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:34:59 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_gyr_colour(int ints, int rank)
{
	int		colour;
	int		spectrum;

	spectrum = (510 * rank) / ints;
	if (spectrum < 255)
	{
		colour = 0x00FF00;
		while (spectrum)
		{
			colour += 0x010000;
			spectrum--;
		}
	}
	else
	{
		spectrum -= 255;
		colour = 0xFFFF00;
		while (spectrum)
		{
			colour -= 0x000100;
			spectrum--;
		}
	}
	return (colour);
}
