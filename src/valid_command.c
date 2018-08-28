/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 22:57:58 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 02:20:13 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		valid_command(char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		return (1);
	else if (ft_strcmp(str, "sb") == 0)
		return (1);
	else if (ft_strcmp(str, "ss") == 0)
		return (1);
	else if (ft_strcmp(str, "pa") == 0)
		return (1);
	else if (ft_strcmp(str, "pb") == 0)
		return (1);
	else if (ft_strcmp(str, "ra") == 0)
		return (1);
	else if (ft_strcmp(str, "rb") == 0)
		return (1);
	else if (ft_strcmp(str, "rr") == 0)
		return (1);
	else if (ft_strcmp(str, "rra") == 0)
		return (1);
	else if (ft_strcmp(str, "rrb") == 0)
		return (1);
	else if (ft_strcmp(str, "rrr") == 0)
		return (1);
	else
		return (0);
}
