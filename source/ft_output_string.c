#include "../includes/ft_printf.h"

void	ft_output_string(t_print *info)
{
	char *string;

	string = va_arg(info->args, char *);
	if (info->width && !info->dash)
		ft_mod_right_cs(info, ft_strlen(string));
	info->total_length += ft_putstr(string);
}