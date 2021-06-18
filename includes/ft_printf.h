#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h> //remove

typedef struct	s_print
{
	va_list		args;
	const char	*format;
	int			argument_length;
	int			total_length;
	
	bool		dash;
	bool		has_precision;
	bool		hash;
	bool		len_mod_l;
	bool		len_mod_ll;
	bool		len_mod_h;
	bool		len_mod_hh;
	bool		plus;
	bool		space;
	bool		zero;
	int			precision;
	int			width;
}	t_print;

void		ft_format_flag(t_print *info);
void	ft_format_precision(t_print *info); //removed static, 
void	ft_format_specifier(t_print *info); //static cannot not be here?
void	ft_reset_arg_info(t_print *info);
void		ft_mod_right_alpha(t_print *info, int argument_len);
void		ft_mod_left_alpha(t_print *info, int argument_len);
void	ft_mod_right_digit(t_print *info, char *itoa, int neg);
void	ft_mod_right_pointer(t_print *info, char *ulltoa);
void	ft_mod_left_digit(t_print *info);
void		ft_mod_precision(t_print *info, char **string);
void		ft_output_char(t_print *info);
void		ft_output_blank(t_print *info);
void		ft_output_hex(t_print *info);
void		ft_output_int(t_print *info);
void		ft_output_pointer(t_print *info);
void		ft_output_string(t_print *info);
int			ft_printf(const char *format, ...);
void		ft_output_unsigned(t_print *info);

#endif