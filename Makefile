NAME = libftprintf.a
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) libft

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	cc -Wall -Wextra -Werror -c $< -o $@

libft:
	make -C ./libft

fclean:
	rm -rf *.o

.PHONY: libft
