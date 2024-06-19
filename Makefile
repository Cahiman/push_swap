NAME = push_swap

C_FILES = main.c join.c list.c
SRCS = $(addprefix srcs/,$(C_FILES))

CFLAGS = -Wall -Wextra -Werror

LIBS = printf/libftprintf.a libft/libft.a
DEPS = $(addprefix libs/,$(LIBS))

all: $(NAME)

$(NAME):
	make -C libs/printf
	make -C libs/libft
	cc $(SRCS) -g3 -I includes -lm -lz -o $(NAME) $(DEPS)

clean:
	make -C libs/printf clean
	make -C libs/libft clean

fclean: clean
	make -C libs/printf fclean
	make -C libs/libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re