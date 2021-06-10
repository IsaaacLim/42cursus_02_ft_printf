#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include "../includes/ft_printf.h" //don't need?

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);
int		ft_putchar(char c);
int		ft_putstr(char *string);

#endif