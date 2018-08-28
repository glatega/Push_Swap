/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:04:52 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:05:00 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_commands	*next_command(t_commands *command)
{
	t_commands	*cmd;

	cmd = command;
	command = command->next;
	free(cmd->cmd);
	free(cmd);
	return (command);
}
