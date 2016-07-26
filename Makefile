NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_error.c ft_libft.c ft_push_swap.c ft_s.c ft_r.c ft_p.c ft_struct.c \
ft_rr.c ft_algo.c ft_fctalgo.c ft_fctalgo2.c ft_algofusion.c ft_option.c ft_perfect.c


OBJ = $(SRC:.c=.o)

$(NAME) :
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -o push_swap

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
