#include "../includes/ft_printf.h"

void	ft_output_char(t_print *info)
{
	char letter;

	letter = va_arg(info->args, int);
	if(info->width && !info->dash)
		ft_mod_right_alpha(info, 1);
	info->total_length += ft_putchar(letter);
	if (info->width && info->dash)
		ft_mod_left_alpha(info, 1);
}

void	ft_output_string(t_print *info)
{
	char	*string;

	string = va_arg(info->args, char *);
	if (!string)
		string = "(null)";
	if (info->has_precision)
			ft_mod_precision(info, &string);
	
	
	if (info->width && !info->dash)
		ft_mod_right_alpha(info, ft_strlen(string));
	info->total_length += ft_putstr(string);
	if (info->width && info->dash)
		ft_mod_left_alpha(info, ft_strlen(string));
	
	if (info->has_precision)
		free(string);
}

void	ft_output_nothing(t_print *info)
{
	signed char *sc_num;
	short *s_num;
	int		*i_num;
	long *l_num;

	if (info->len_mod_h)
	{
		s_num = va_arg(info->args, short*);
		*s_num = info->total_length;
	}
	else if (info->len_mod_hh)
	{
		sc_num = va_arg(info->args, signed char*);
		*sc_num = info->total_length;
	}
	else if (info->len_mod_l || info->len_mod_ll)
	{
		l_num = va_arg(info->args, long*);
		*l_num = info->total_length;
	}
	else
	{	
		i_num = va_arg(info->args, int*);
		*i_num = info->total_length;
	}
}