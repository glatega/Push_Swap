/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_flags_and_args.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 02:16:35 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:16:45 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_flags_and_args(t_flags **flags, char ***args)
{
	if ((*flags)->f == 1)
	{
		free(**args);
		free(*args);
	}
	free(*flags);
}
