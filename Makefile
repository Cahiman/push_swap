NAME = push_swap

C_FILES =	algo.c\
			check_errors.c\
			init_list.c\
			main.c\
			parse.c\
			push.c\
			reverse.c\
			rotate.c\
			swap.c\
			utils.c\


SRCS = $(addprefix srcs/,$(C_FILES))

CFLAGS = -Wall -Werror -Wextra -I include/ -g

LIB = libft/libft.a printf/libftprintf.a
DEPS = $(addprefix libs/,$(LIB))

all: ${NAME}

${NAME}: ${SRCS}
	make -C libs/libft
	make -C libs/printf
	cc ${CFLAGS} ${SRCS} -o ${NAME} ${DEPS}

clean:
	make -C libs/libft clean
	make -C libs/printf clean

fclean:	clean
		rm -rf ${NAME}

re:             fclean all

.PHONY:         all clean fclean re