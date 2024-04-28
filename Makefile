RED    = $(shell printf "\33[31m")
GREEN  = $(shell printf "\33[32m")
WHITE  = $(shell printf "\33[37m")
YELLOW = $(shell printf "\33[33m")
RESET  = $(shell printf "\33[0m")
BLUE = $(shell printf "\33[34m")
PURPLE = $(shell printf "\33[35m")
TITLE = $(shell printf "\33[32;40m")

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror -g
SRCS = ft_printf.c update_struct.c print_format.c putcharf.c putstr_width.c putstrf.c
OBJS = $(SRCS:.c=.o)
LIBFT = ./libft/libft.a

all: $(NAME) libft 

$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

.c.o:
	@cc $(FLAGS) -c $< -o $@

$(LIBFT):
	@make --silent -C ./libft
	@echo "$(PURPLE)   __ _               _     _    __ "
	@echo "  / _| |_    _ __ _ _(_)_ _| |_ / _|"
	@echo " |  _|  _|  | '_ \ '_| | ' \  _|  _|"
	@echo " |_|  \\__|__| .__/_| |_|_||_\\__|_|  "
	@echo "        |___|_|                     "
	@echo
	@echo
	@echo "$(GREEN) Successfully compiled ft_printf.$(RESET)"
	@echo
	@echo

fclean: clean
	@rm -f $(NAME)
	@make -C ./libft fclean
	@clear
	@echo
	@echo "$(RED)┏┓┓ ┏┓┏┓┳┓┏┓┳┓"
	@echo "┃ ┃ ┣ ┣┫┃┃┣ ┃┃"
	@echo "┗┛┗┛┗┛┛┗┛┗┗┛┻┛"
	@echo

clean:
	@rm -rf *.o
	@clear
	@echo
	@echo "$(RED)┏┓┓ ┏┓┏┓┳┓┏┓┳┓"
	@echo "┃ ┃ ┣ ┣┫┃┃┣ ┃┃"
	@echo "┗┛┗┛┗┛┛┗┛┗┗┛┻┛"
	@echo

re: fclean all

.PHONY: libft
