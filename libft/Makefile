NAME	=	libft.a

SRCS	=	ft_atoi.c		ft_bzero.c		ft_calloc.c		ft_isdigit.c \
			ft_lltoa.c		ft_putchar.c	ft_putstr.c 	ft_strchr.c \
			ft_strdup.c		ft_strndup.c	ft_strlen.c		ft_toupper.c \
			ft_ulltoa_hex.c	ft_ulltoa.c
			
OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra -I

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re