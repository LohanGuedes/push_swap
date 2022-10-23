# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lguedes <lguedes@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 20:21:22 by lguedes           #+#    #+#              #
#    Updated: 2022/10/21 07:37:37 by lguedes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

LIBFT_PATH = ./include/libft
STACKLIB_PATH = ./include/stack_lib

LIBFT = $(LIBFT_PATH)/libft.a
STACKLIB = $(STACKLIB_PATH)/stack_lib.a

SRCS		+= main.c min_max.c slack.c big_sort.c

CC =		cc
CFLAGS =	-Wall -Wextra -Werror
DB_CFLAGS =	-Wall -Wextra -Werror -g

all:		$(NAME)

debug:
	$(CC) $(DB_CFLAGS) $(MLX_FLAGS) $(SRCS) $(LIBFT) $(STACKLIB) -o so_long

$(LIBFT):
		$(MAKE) -C $(LIBFT_PATH)

$(STACKLIB):
		$(MAKE) -C $(STACKLIB_PATH)

$(NAME):	$(LIBFT) $(STACKLIB)
			$(CC) $(CFLAGS) $(SRCS) $(LIBFT) $(STACKLIB) -o push_swap

clean:
			@$(MAKE) -C $(LIBFT_PATH) clean
			@$(MAKE) -C $(STACKLIB_PATH) clean

fclean:		clean
			@$(MAKE) -C $(LIBFT_PATH) fclean
			@$(MAKE) -C $(STACKLIB_PATH) fclean
			@rm -rf push_swap

re:			fclean all

.PHONY:		all clean fclean re
