NAME = push_swap

BONUS_NAME = checker

C_FILES = main.c\
		parse.c\


C_BONUS =

SRCS = $(addprefix srcs/,$(C_FILES))

SRCS_BONUS = $(addprefix bonus/,$(C_BONUS))

CFLAGS = -Wall -Werror -Wextra -I include/ -g

LIB = libft/libft.a
DEPS = $(addprefix libs/,$(LIB))

all: ${NAME}

${NAME}: ${SRCS}
	make -C libs/libft
	cc ${CFLAGS} ${SRCS} -o ${NAME} ${DEPS}

bonus: ${BONUS_NAME}

${BONUS_NAME}: ${SRCS_BONUS}
	make -C libs/libft
	cc ${CFLAGS} ${SRCS_BONUS} -o ${BONUS_NAME} ${DEPS}

clean:
	make -C libs/libft clean

fclean:	clean
		rm -rf ${NAME} ${BONUS_NAME}

re:             fclean all

.PHONY:         all clean fclean re