/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:42:35 by glatega           #+#    #+#             */
/*   Updated: 2018/08/27 23:08:15 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <mlx.h>


typedef struct	s_intlist
{
	int					num;
	int					rank;
	struct s_intlist	*next;
}				t_intlist;

typedef struct	s_sort_stats
{
	int			moves;
	t_intlist	*list;
}				t_sort_stats;

typedef struct	s_commands
{
	char				*cmd;
	struct s_commands	*next;
}				t_commands;

typedef struct	s_flags
{
	int			v;
	int			f;
	int			c;
	int			total;
}				t_flags;

typedef struct	s_vis
{
	void		*ptr;
	void		*win;
}				t_vis;

typedef struct	s_vis_rect
{
	int			height;
	int			width;
	int			x;
	int			y;
	int			ints;
}				t_vis_rect;

typedef struct	s_params
{
	t_intlist	*a_list;
	t_intlist	*b_list;
	t_vis		*vis;
	t_flags		*flags;
	t_vis_rect	*box;
	t_commands	*cmd;
}				t_params;

void			command_sa(t_intlist **a_list);

void			command_sb(t_intlist **b_list);

void			command_ss(t_intlist **a_list, t_intlist **b_list);

void			command_pa(t_intlist **a_list, t_intlist **b_list);

void			command_pb(t_intlist **a_list, t_intlist **b_list);

void			command_ra(t_intlist **a_list);

void			command_rb(t_intlist **b_list);

void			command_rr(t_intlist **a_list, t_intlist **b_list);

void			command_rra(t_intlist **a_list);

void			command_rrb(t_intlist **b_list);

void			command_rrr(t_intlist **a_list, t_intlist **b_list);

t_intlist		*add_intlist(t_intlist *list, int num);

int				check_duplicates(t_intlist *list);

void			check_ok(t_intlist *a_list, t_intlist *b_list);

int				error_check(t_intlist *list, char **words, t_flags *flags);

void			exec_command(char *str, t_intlist **a_list, t_intlist **b_list);

int				is_ranked(t_intlist *list);

int				list_length(t_intlist *list);

t_intlist		*make_intlist(char **str);

void			print_intlist(t_intlist *list);

void			rank_list(t_intlist *list);

t_commands		*read_ps_commands(void);

int				valid_command(char *str);

void			push_all_a(t_intlist **a_list, t_intlist **b_list);;

void			arrange_b(t_intlist **b_list);

int				intlist_biggest_num(t_intlist *list);

int				intlist_smallest_num(t_intlist *list);

void			sort_next(t_intlist **a_list, t_intlist **b_list);

void			sort_this_num(t_sort_stats *best, t_intlist **a_list, t_intlist **b_list);

void			do_combo_rra_rrb(t_intlist **a_lst, t_intlist **b_lst, t_intlist *node);

void			do_combo_ra_rrb(t_intlist **a_list, t_intlist **b_list, t_intlist *node);

void			do_combo_rra_rb(t_intlist **a_list, t_intlist **b_list, t_intlist *node);

void			do_combo_ra_rb(t_intlist **a_list, t_intlist **b_list, t_intlist *node);

void			execute_rra_rrb(int a, int b, t_intlist **a_list, t_intlist **b_list);

void			execute_ra_rrb(int a, int b, t_intlist **a_list, t_intlist **b_list);

void			execute_rra_rb(int a, int b, t_intlist **a_list, t_intlist **b_list);

void			execute_ra_rb(int a, int b, t_intlist **a_list, t_intlist **b_list);

void			execute_rrr(t_intlist **a_list, t_intlist **b_list, int num);

void			execute_rrb(t_intlist **b_list, int num);

void			execute_rra(t_intlist **a_list, int num);

void			execute_rr(t_intlist **a_list, t_intlist **b_list, int num);

void			execute_rb(t_intlist **b_list, int num);

void			execute_ra(t_intlist **a_list, int num);

int				best_combo_moves(t_intlist *a_list, t_intlist *b_list, t_intlist *node);

int				best_combo(t_intlist *a_list, t_intlist *b_list, t_intlist *node);

int				combo_rra_rrb(t_intlist *a_list, t_intlist *b_list, t_intlist *node);

int				combo_rra_rb(t_intlist *a_list, t_intlist *b_list, t_intlist *node);

int				combo_ra_rrb(t_intlist *a_list, t_intlist *b_list, t_intlist *node);

int				combo_ra_rb(t_intlist *a_list, t_intlist *b_list, t_intlist *node);

int				last_intlist_num(t_intlist *list);

int				intlist_smaller_than_num(t_intlist *list, int num);

int				intlist_bigger_than_num(t_intlist *list, int num);

void			execute_sa(t_intlist **a_list, int num);

void			execute_sb(t_intlist **b_list, int num);

void			small_sort(t_intlist **a_list, t_intlist **b_list);

void			sort_fingers(t_intlist **a_list, t_intlist **b_list);

void			sort_three_ascending(t_intlist **list);

void			push_rank_to_b(t_intlist **a_list, t_intlist **b_list, int rank);

int				is_sorted(t_intlist *a_list);

void			free_stack(t_intlist *a_list);

void			free_array(char ***array);

t_flags			*check_for_flags(char **args);

int				get_pos_num(t_intlist *intlist, int num);

char			**file_to_string(char **args);

char			*append_and_free(char *old, char *add);

void			choose_sort_method(t_intlist **a_list);

void			free_flags_and_args(t_flags **flags, char ***args);

int				validate_commands(t_commands *cmds);

void			draw_rect(t_vis *vis, t_vis_rect *box, int colour);

void			draw_stack_border(t_vis *vis, t_vis_rect stat);

int				get_gyr_colour(int ints, int rank);

void			free_params(t_params *param);

int				key_hooks(int hook, void *param);

void			draw_stack(t_intlist *list, t_flags *flags, t_vis *vis, t_vis_rect stat);

void			create_window(t_vis *vis, int ints);

t_commands		*next_command(t_commands *command);

int				vis_next_cmd(void *param);

void			visualizer(t_commands *cmd, t_flags *flags, t_intlist *a, t_intlist *b);

void			run_commands(t_commands *commands, t_flags *flags, t_intlist **a_list);

#endif
