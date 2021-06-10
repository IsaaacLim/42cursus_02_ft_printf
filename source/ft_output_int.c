#include "../includes/ft_printf.h"

void	ft_output_int(t_print *info)
{
	int		number;
	char	*string;

	number = va_arg(info->args, int);
	string = ft_itoa(number);
	info->total_length += ft_putstr(string);
	free(string);
}