NAME 	=	libftprintf.a

LIBDIR	=	./libft
SRCDIR	=	./source
INCLUDES = 	./includes

SRCS	=	$(LIBDIR)/ft*.c \
			$(SRCDIR)/format.c $(SRCDIR)/ft_initialize_info.c \
			$(SRCDIR)/modify.c \
			$(SRCDIR)/ft_output_alpha.c $(SRCDIR)/ft_output_num.c \
			$(SRCDIR)/ft_printf.c 
#./source/ft*.c

#OBJS	=	$(SRCS:%.c=%.o)
OBJS	=	ft*.o format.o modify.o

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -c

all:	$(NAME)

$(NAME):
	@make re -C $(LIBDIR)
	@$(CC) -g3 $(CFLAGS) $(SRCS) -I $(INCLUDES)
	@ar rcs $(NAME) $(OBJS) $(LIBDIR)/*.o
	@ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
#rm -f $(LIBDIR)/*.a

re: fclean all

.PHONY: all clean fclean re