#include "../includes/ft_printf.h"

void	ft_output_string(t_print *info)
{
	char *string;

	string = va_arg(info->args, char *);
	info->total_length += ft_putstr(string);
}