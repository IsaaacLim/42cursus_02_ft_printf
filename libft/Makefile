NAME	=	libft.a

SRCS	=	ft_putstr.c

OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc
#CFLAGS	=	-c #add flags

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re