NAME 	=	libftprintf.a

LIBDIR	=	./libft
SRCDIR	=	./source
INCLUDES = 	./includes

SRCS	=	$(LIBDIR)/ft*.c \
			$(SRCDIR)/format.c $(SRCDIR)/ft_initialize_info.c \
			$(SRCDIR)/modify.c \
			$(SRCDIR)/ft_output_alpha.c $(SRCDIR)/ft_output_num.c \
			ft_printf.c 
#./source/ft*.c

OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc -c
#CFLAGS	=	-c #add flags -Wall -Werror -Wextra -I

all:	$(NAME)

$(NAME):	$(OBJS)
	make re -C $(LIBDIR)
	$(CC) -g3 $(SRCS) -I $(INCLUDES)
	ar rcs $(NAME) $(OBJS) $(LIBDIR)/*.o
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIBDIR)/*.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re