# Program
NAME = ft_printf_test
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
LD = ld -o
RM = rm -rf
O = obj/
SRC = test_c.c \
	  test_s.c \
	  test_d.c \
	  test_i.c \
	  test_u.c \
	  test_x.c \
	  test_p.c \
	  test_misc.c \
	  test_helpers.c \
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
BONUS = 0

# Custom

all: $(NAME)

$(NAME): precomp $(OBJ)
	@echo "\n$(GREEN)Objects compiled successfully.$(DEF_COLOR)\n"
	@make re -C ../libtest42/
	@echo "$(YELLOW)Linking objects.$(DEF_COLOR)\n"
	@$(CC) $(CFLAGS) -DBONUS=$(BONUS) -o $(NAME) $(OBJ) -ltest42 -lftprintf
	@echo "$(GREEN)$(NAME) compiled successfully.$(DEF_COLOR)\n"

bonus: BONUS := 1
bonus: all

$O%.o: %
	$(CC) $(CFLAGS) -DBONUS=$(BONUS) $(INCLUDE) -c $^ -o $@

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

bre: fclean bonus

debug: re xclean
	$(RM) $O $(NAME); norminette

cdebug: debug
	sleep 4; clear

.PHONY: all clean fclean xclean re debug cdebug
