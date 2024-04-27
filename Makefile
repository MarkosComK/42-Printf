RED    = $(shell printf "\33[31m")
GREEN  = $(shell printf "\33[32m")
WHITE  = $(shell printf "\33[37m")
YELLOW = $(shell printf "\33[33m")
RESET  = $(shell printf "\33[0m")
BLUE = $(shell printf "\33[34m")
PURPLE = $(shell printf "\33[35m")
TITLE = $(shell printf "\33[32;40m")

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) libft 

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

.c.o:
	@cc $(FLAGS) -c $< -o $@

libft:
	@make --silent -C ./libft
	@echo "   __ _               _     _    __ "
	@echo "  / _| |_    _ __ _ _(_)_ _| |_ / _|"
	@echo " |  _|  _|  | '_ \ '_| | ' \  _|  _|"
	@echo " |_|  \\__|__| .__/_| |_|_||_\\__|_|  "
	@echo "        |___|_|                     "
	@echo
	@echo
	@echo "$(GREEN) Successfully compiled ft_printf."
	@echo
	@echo

fclean:
	@rm -rf *.o
	@make -C ./libft fclean
	@clear
	@echo
	@echo "$(RED)┏┓┓ ┏┓┏┓┳┓┏┓┳┓"
	@echo "┃ ┃ ┣ ┣┫┃┃┣ ┃┃"
	@echo "┗┛┗┛┗┛┛┗┛┗┗┛┻┛"

.PHONY: libft
