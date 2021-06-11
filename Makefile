NAME 	=	libftprintf.a

LIBDIR	=	./libft
SRCDIR	=	./source

SRCS	=	$(LIBDIR)/ft*.c \
			$(SRCDIR)/ft_format_specifier.c $(SRCDIR)/ft_initialize_info.c \
			$(SRCDIR)/modify.c \
			$(SRCDIR)/ft_output_char.c $(SRCDIR)/ft_output_int.c $(SRCDIR)/ft_output_string.c\
			ft_printf.c 
#./source/ft*.c

OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc
#CFLAGS	=	-c #add flags -Wall -Werror -Wextra -I

all:	$(NAME)

$(NAME):	$(OBJS)
	make -C $(LIBDIR) 
	ar rcs $(NAME) $(OBJS) $(LIBDIR)/*.o

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIBDIR)/*.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re