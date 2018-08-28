/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 08:35:12 by glatega           #+#    #+#             */
/*   Updated: 2018/08/23 08:35:27 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_array(char ***array)
{
	char	**arr;

	arr = *array;
	while (*arr)
	{
		free(*arr);
		arr++;
	}
	free(*array);
}
