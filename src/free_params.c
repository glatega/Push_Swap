/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:00:38 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:01:24 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_params(t_params *param)
{
	if (param->a_list != NULL)
		free_stack(param->a_list);
	if (param->b_list != NULL)
		free_stack(param->b_list);
	free(param->flags);
}
