#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include "../includes/ft_printf.h" //don't need?

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isdigit(int c);
char	*ft_lltoa(long long n);
int		ft_putchar(char c);
int		ft_putstr(char *string);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t dstsize);
size_t	ft_strlen(const char *s);
void	ft_toupper(char *string);
char	*ft_ulltoa_hex(unsigned long long dec_num);
char	*ft_ulltoa(unsigned long long n);
char	*ft_utoa_hex(unsigned int dec_num);

#endif