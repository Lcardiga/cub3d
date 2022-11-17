# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 02:54:51 by lcardiga          #+#    #+#              #
#    Updated: 2022/11/17 02:54:54 by lcardiga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d

CUB = \
	draw_and_search_dz.c\
	init_struct.c\
	keyhook.c\
	move.c\
	open_txt.c\
	raycast.c\
	rotate.c\

GNL = \
	get_next_line_utils.c\
	get_next_line.c\

PARS =  \
	check_map.c\
	parse_params.c\
	parse_rgb.c\

UTILS = \
	utils.c\
	free.c\
	str_arr_utils.c\
	str_arr_utils2.c\
	pixel.c\

SRC =	$(addprefix srcs/gnl/, ${GNL})\
		$(addprefix srcs/parser/, ${PARS})\
		$(addprefix srcs/utils/, ${UTILS})\
		$(addprefix srcs/cub/, ${CUB})\
		srcs/main.c\

PATH_LIB = srcs/libft/

NAME_LIB = libft.a

LIB = srcs/libft/libft.a

HDRS = srcs/cub.h

OBJ = $(SRC:c=o)
DEP = $(OBJ:o=d)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -MMD

MLX_FLAGS = -L mlx -l mlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(OBJ)
	@make -C mlx 2>/dev/null
	@make -C $(PATH_LIB)
	@$(CC) $(FLAGS) $(MLX_FLAGS) -I mlx $(OBJ) $(LIB) -I. -o $(NAME)

%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@make clean -C $(PATH_LIB)
	@make clean -C mlx
	@rm -f $(OBJ) $(DEP)

fclean: clean
	@make fclean -C $(PATH_LIB)
	@rm -f $(NAME)

re:		fclean all

reclean: re
	$(RM) $(OBJ) $(DEP)
	make clean -C $(PATH_LIB)

.PHONY: all clean fclean

include $(wildcard $(DEP))
