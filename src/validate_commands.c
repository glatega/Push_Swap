/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_commands.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 02:26:07 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 02:26:17 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		validate_commands(t_commands *cmds)
{
	while (cmds != NULL)
	{
		if (!valid_command(cmds->cmd))
			return (0);
		cmds = cmds->next;
	}
	return (1);
}
