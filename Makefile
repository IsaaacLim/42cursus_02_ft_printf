NAME 	=	libftprintf.a

LIBDIR	=	./libft
SRCDIR	=	./source
INCLUDES = 	./includes

SRCS	=	$(SRCDIR)/ft_printf.c	$(SRCDIR)/ft_reset_arg_info.c \
			$(SRCDIR)/src_format.c	$(SRCDIR)/src_length_mod.c \
			$(SRCDIR)/src_modify.c	$(SRCDIR)/src_output_alpha.c \
			$(SRCDIR)/src_output_num.c \
			$(LIBDIR)/ft*.c

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

re: fclean all

.PHONY: all bonus clean fclean re