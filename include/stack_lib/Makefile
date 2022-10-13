SRCS    += $(addprefix src/, s_basic.c s_push.c s_rev_rotate.c s_rotate.c s_swap.c)

OBJS	= ${SRCS:.c=.o}

HEADER	= stack_lib.h

NAME	= stack_lib.a

CC		= clang

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR_RC 	= ar rc

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR_RC} ${NAME} ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
