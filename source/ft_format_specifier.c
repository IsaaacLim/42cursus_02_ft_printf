#include "../includes/ft_printf.h"

void	ft_format_specifier(t_print *info)
{
	info->format++;
	if (*info->format == 'c')
		ft_output_char(info);
	if (*info->format == 's')
		ft_output_string(info);
	if (*info->format == 'd')
		ft_output_int(info);
	/*{
		number = va_arg(info->args, int);
		string = ft_itoa(number);
		info->total_length += ft_putstr(string);
		free (string);
	}*/
	info->format++;
}