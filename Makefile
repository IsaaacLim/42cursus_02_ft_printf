NAME 	=	libftprintf.a

SRCS	=	./libft/ft*.c \
			./source/ft_format_specifier.c ./source/ft_initialize_info.c \
			ft_printf.c 
#./source/ft*.c

OBJS	=	$(SRCS:%.c=%.o)

LIBFT	=	./libft
SOURCE	=	./source

CC		=	gcc
#CFLAGS	=	-c #add flags -Wall -Werror -Wextra -I

all:	$(NAME)

$(NAME):	$(OBJS)
	make -C $(LIBFT) 
	ar rcs $(NAME) $(OBJS) $(LIBFT)/*.o

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIBFT)/*.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re