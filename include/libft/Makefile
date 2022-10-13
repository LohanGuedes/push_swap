SRCS    += $(addprefix src/,ft_atoi.c ft_isalpha.c ft_itoa.c ft_lstiter.c ft_memchr.c ft_printf.c)
SRCS    += $(addprefix src/,ft_push_percent.c ft_putchar_fd.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c)
SRCS    += $(addprefix src/,ft_bzero.c ft_isascii.c ft_lstadd_back.c ft_lstlast.c ft_memcmp.c ft_push_char.c)
SRCS    += $(addprefix src/,ft_push_pointer.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c  get_next_line.c)
SRCS    += $(addprefix src/,ft_calloc.c ft_isdigit.c ft_lstadd_front.c ft_lstmap.c ft_memcpy.c ft_push_decimal.c)
SRCS    += $(addprefix src/,ft_push_right.c ft_puthexanbr_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c get_next_line_utils.c)
SRCS    += $(addprefix src/,ft_digit_count.c ft_isplaceholder.c  ft_lstclear.c ft_lstnew.c   ft_memmove.c)
SRCS    += $(addprefix src/,ft_push_hexa_low.c ft_push_string.c ft_putnbr_fd.c ft_striteri.c)
SRCS    += $(addprefix src/,ft_strmapi.c ft_substr.c ft_isalnum.c ft_isprint.c ft_lstdelone.c)
SRCS    += $(addprefix src/,ft_lstsize.c ft_memset.c ft_push_hexa_upper.c ft_push_unsigned_decimal.c)
SRCS    += $(addprefix src/,ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c)
SRCS	+= $(addprefix src/,ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c)

OBJS	= ${SRCS:.c=.o}

HEADER	= libft.h

NAME	= libft.a

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
