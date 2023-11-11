# Program
NAME = ft_printf_test
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
LD = ld -o
RM = rm -rf
O = obj/
SRC = test_c.c \
	  	test_s.c \
			main.c
OBJ = $(SRC:%=$O%.o)
UNW = .DS_Store ./*/.DS_Store

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# Custom

all: $(NAME)

$(NAME): precomp $(OBJ)
	@echo "\n$(GREEN)Objects compiled successfully.$(DEF_COLOR)\n"
	@make re -C ../testlib/
	@echo "$(YELLOW)Linking objects.$(DEF_COLOR)\n"
	@$(CC) -o $(NAME) $(OBJ) ../testlib/testlib.a libftprintf.a
	@echo "$(GREEN)$(NAME) compiled successfully.$(DEF_COLOR)\n"

$O%.o: %
	$(CC) $(CFLAGS) $(INCLUDE) -c $^ -o $@

precomp:
	@echo "$(YELLOW)Creating object directories.$(DEF_COLOR)\n"
	@mkdir -p $O
	@echo "$(YELLOW)Compiling $(NAME) objects.$(DEF_COLOR)\n"

clean:
	@echo "$(GREEN)Cleaning compiled $(NAME) sources.$(DEF_COLOR)\n"
	@$(RM) $O

fclean: clean
	@$(RM) $(NAME)

xclean: fclean
	@$(RM) $(UNW)

re: fclean all

debug: re xclean
	$(RM) $O $(NAME); norminette

cdebug: debug
	sleep 4; clear

.PHONY: all clean fclean xclean re debug cdebug
