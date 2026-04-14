NAME = libftprintf.a

LIBFT_A = libft.a

LIBFT_DIR = ./libft

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar csr

all: $(NAME) 

$(NAME): $(OBJS) $(LIBFT_A)
	$(AR) $(NAME) $(OBJS) $(LIBFT_DIR)/$(LIBFT_A)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

test: $(LIBFT_A)

$(LIBFT_A):
	make -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean:	clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
