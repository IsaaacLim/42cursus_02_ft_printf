#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_print
{
	va_list		args;
	const char	*format;
}	t_print;

void	ft_format_specifier(t_print *info);
int		ft_printf(const char *format, ...);

#endif