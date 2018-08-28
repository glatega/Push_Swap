/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 22:56:20 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 01:40:23 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		error_check(t_intlist *list, char **words, t_flags *flags)
{
	int		list_size;
	int		word_cnt;
	int		i;

	if (check_duplicates(list) != 0)
		return (1);
	list_size = list_length(list);
	word_cnt = 0;
	i = 0;
	while (words[i])
		word_cnt += ft_wordcount(words[i++]);
	if (list_size == word_cnt - flags->total || list_size == word_cnt)
		return (0);
	return (1);
}
