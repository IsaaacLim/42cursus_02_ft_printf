#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include "../includes/ft_printf.h" //don't need?

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isdigit(int c);
char	*ft_itoa(int n);
char	*ft_utoa_hex(unsigned int dec_num);
int		ft_putchar(char c);
int		ft_putstr(char *string);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_utoa(unsigned int n);

#endif