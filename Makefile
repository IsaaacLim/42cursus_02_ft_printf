NAME 	=	libftprintf.a

LIBDIR	=	./libft
SRCDIR	=	./source
INCLUDES = 	./includes

SRCS	=	$(LIBDIR)/ft*.c \
			$(SRCDIR)/src_format.c $(SRCDIR)/ft_reset_arg_info.c \
			$(SRCDIR)/src_modify.c \
			$(SRCDIR)/src_output_alpha.c $(SRCDIR)/ft_output_num.c \
			$(SRCDIR)/ft_printf.c 
#./source/ft*.c

#OBJS	=	$(SRCS:%.c=%.o)
OBJS	=	ft*.o src*.o

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -c

all:	$(NAME)

$(NAME):
	@make re -C $(LIBDIR)
	@$(CC) -g3 $(CFLAGS) $(SRCS) -I $(INCLUDES)
	@ar rcs $(NAME) $(OBJS) $(LIBDIR)/*.o
	@ranlib $(NAME)

bonus:	re

clean:
	rm -f $(OBJS) $(LIBDIR)/ft*.o

fclean: clean
	rm -f $(NAME) $(LIBDIR)/libft.a
#rm -f $(LIBDIR)/*.a

re: fclean all

.PHONY: all bonus clean fclean re