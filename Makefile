NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c \
	parsing.c \
	init_stack.c \
	stack_utils.c \
	stack_utils2.c \
	sa_sb_ss.c \
	pa_pb.c \
	ra_rb_rr.c \
	rra_rrb_rrr.c \
	small_sort.c \
	radix_sort.c \
	sort.c \
	utils.c \
	free.c \
	split.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

all: $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re