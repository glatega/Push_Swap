/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_intlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 22:52:52 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 01:40:13 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_intlist	*make_intlist(char **str)
{
	t_intlist	*list;
	int			a;
	int			b;
	char		**tab;

	a = 0;
	list = NULL;
	while (str[a])
	{
		tab = ft_strsplit(str[a], ' ');
		b = 0;
		while (tab[b])
		{
			if (valid_int(tab[b]))
				list = add_intlist(list, ft_atoi(tab[b]));
			b++;
		}
		a++;
		free_array(&tab);
	}
	rank_list(list);
	return (list);
}
