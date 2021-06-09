NAME 	=	libftprintf.a

SRCS	=	./libft/ft*.c ./source/ft*.c

OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc
#CFLAGS	=	-c #add flags -Wall -Werror -Wextra -I

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re