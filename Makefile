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
SRCSDIR = ./srcs/
SRCS = ft_printf.c ./srcs/update_struct.c ./srcs/print_format.c ./srcs/putcharf.c ./srcs/putstr_width.c ./srcs/putstrf.c\
	   ./srcs/putstr_precision.c ./srcs/putboth.c ./srcs/print_ptr.c ./srcs/print_ptr_spaces.c ./srcs/print_ptr_hex.c\
	   ./srcs/ptr_len.c ./srcs/print_decimal.c ./srcs/print_decimal_left.c ./srcs/print_unsigned_dec.c ./srcs/print_decimal_prec.c\
	   ./srcs/print_dec_width.c ./srcs/print_dec_width2.c ./srcs/numlen.c ./srcs/print_dec_wz.c ./srcs/print_dec_wp.c\
	   ./srcs/print_dec_wp2.c ./srcs/print_hexa.c ./srcs/print_hexa_left.c ./srcs/print_hexa_prec.c ./srcs/print_hexa_hash.c\
	   ./srcs/print_hexa_width.c
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

bonus: $(NAME)

fclean: clean
	@rm -f $(NAME)
	@make -C ./libft fclean
	@echo
	@echo "$(RED)┏┓┓ ┏┓┏┓┳┓┏┓┳┓"
	@echo "┃ ┃ ┣ ┣┫┃┃┣ ┃┃"
	@echo "┗┛┗┛┗┛┛┗┛┗┗┛┻┛"
	@echo

clean:
	@rm -rf *.o
	@rm -rf ./srcs/*.o
	@make -C ./libft clean
	@echo
	@echo "$(RED)┏┓┓ ┏┓┏┓┳┓┏┓┳┓"
	@echo "┃ ┃ ┣ ┣┫┃┃┣ ┃┃"
	@echo "┗┛┗┛┗┛┛┗┛┗┗┛┻┛"
	@echo

re: fclean all

.PHONY: libft
