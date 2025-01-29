SRCS =  main.c	\
error_control.c	\
listoperations.c	\
actions.c	\
actions_with_utils.c

OBJS = ${SRCS:.c=.o}
NAME =  push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re