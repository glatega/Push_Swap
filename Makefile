# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glatega <glatega@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/03 13:59:57 by glatega           #+#    #+#              #
#    Updated: 2018/08/31 02:06:22 by digicape         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker
PUSHSWAP = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
MLX = -L./libraries/mlx -lmlx -framework OpenGL -framework AppKit
MLX_H = -I ./libraries/mlx
COMP = $(CC) $(FLAGS)
PUSHSWAP_H = -I ./include
LIBFT_H = -I ./libraries/libft/include
LIBFT = -L./libraries/libft -lft
SRC_FOLDER = src/
OBJ_FOLDER = obj/
CHECKER_SRC_FILES =	checker.c \
					add_intlist.c \
					check_duplicates.c \
					check_ok.c \
					command_pa.c \
					command_pb.c \
					command_ra.c \
					command_rb.c \
					command_rr.c \
					command_rra.c \
					command_rrb.c \
					command_rrr.c \
					command_sa.c \
					command_sb.c \
					command_ss.c \
					error_check.c \
					exec_command.c \
					is_ranked.c \
					list_length.c \
					make_intlist.c \
					print_intlist.c \
					rank_list.c \
					read_ps_commands.c \
					valid_command.c \
					free_stack.c \
					free_array.c \
					check_for_flags.c \
					append_and_free.c \
					file_to_string.c \
					validate_commands.c \
					draw_rect.c \
					draw_stack_border.c \
					get_gyr_colour.c \
					free_params.c \
					key_hooks.c \
					draw_stack.c \
					create_window.c \
					next_command.c \
					vis_next_cmd.c \
					visualizer.c \
					run_commands.c
CHECKER_OBJ_FILES := $(CHECKER_SRC_FILES:%.c=%.o)
CHECKER_SRC = $(addprefix $(SRC_FOLDER), $(CHECKER_SRC_FILES))
CHECKER_OBJ = $(addprefix $(OBJ_FOLDER), $(CHECKER_OBJ_FILES))

PS_SRC_FILES =		push_swap.c \
					add_intlist.c \
					check_duplicates.c \
					check_ok.c \
					command_pa.c \
					command_pb.c \
					command_ra.c \
					command_rb.c \
					command_rr.c \
					command_rra.c \
					command_rrb.c \
					command_rrr.c \
					command_sa.c \
					command_sb.c \
					command_ss.c \
					error_check.c \
					is_ranked.c \
					list_length.c \
					make_intlist.c \
					print_intlist.c \
					rank_list.c \
					push_all_a.c \
					arrange_b.c \
					intlist_biggest_num.c \
					intlist_smallest_num.c \
					sort_next.c \
					sort_this_num.c \
					do_combo_rra_rrb.c \
					do_combo_ra_rrb.c \
					do_combo_rra_rb.c \
					do_combo_ra_rb.c \
					execute_rra_rrb.c \
					execute_ra_rrb.c \
					execute_rra_rb.c \
					execute_ra_rb.c \
					execute_rrr.c \
					execute_rrb.c \
					execute_rra.c \
					execute_rr.c \
					execute_rb.c \
					execute_ra.c \
					best_combo_moves.c \
					best_combo.c \
					combo_rra_rrb.c \
					combo_rra_rb.c \
					combo_ra_rrb.c \
					combo_ra_rb.c \
					last_intlist_num.c \
					intlist_smaller_than_num.c \
					execute_sa.c \
					execute_sb.c \
					small_sort.c \
					sort_fingers.c \
					sort_three_ascending.c \
					push_rank_to_b.c \
					is_sorted.c \
					free_stack.c \
					free_array.c \
					check_for_flags.c \
					intlist_bigger_than_num.c \
					get_pos_num.c \
					append_and_free.c \
					file_to_string.c \
					choose_sort_method.c \
					free_flags_and_args.c
PS_OBJ_FILES := $(PS_SRC_FILES:%.c=%.o)
PS_SRC = $(addprefix $(SRC_FOLDER), $(PS_SRC_FILES))
PS_OBJ = $(addprefix $(OBJ_FOLDER), $(PS_OBJ_FILES))

all: $(CHECKER) $(PUSHSWAP)

$(CHECKER): $(CHECKER_OBJ)
	make -C ./libraries/mlx
	make -C ./libraries/libft
	$(COMP) $(CHECKER_OBJ) $(LIBFT) $(MLX) -o $(CHECKER) 

$(PUSHSWAP): $(PS_OBJ)
	make -C ./libraries/libft
	$(COMP) $(PS_OBJ) $(LIBFT) -o $(PUSHSWAP)

obj:
	mkdir -p $@

$(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.c | obj
	$(COMP) -c $< $(LIBFT_H) $(MLX_H) $(PUSHSWAP_H) -o $@

clean:
	make clean -C ./libraries/libft
	rm -rf obj

fclean: clean
	make fclean -C ./libraries/libft
	rm -f $(CHECKER)
	rm -f $(PUSHSWAP)

re: fclean all
