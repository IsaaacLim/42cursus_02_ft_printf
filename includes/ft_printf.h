#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h> //remove

typedef struct	s_print
{
	va_list		args;
	const char	*format;
	int			total_length;
}	t_print;

void	ft_format_specifier(t_print *info);
void	ft_format_sub_specifier(t_print *info);
void	ft_initialize_info(t_print *info);
void	ft_output_char(t_print *info);
void	ft_output_int(t_print *info);
void	ft_output_string(t_print *info);
int		ft_printf(const char *format, ...);

#endif