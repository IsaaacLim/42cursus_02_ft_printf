#include "../includes/ft_printf.h"

void	ft_output_char(t_print *info)
{
	char letter;

	letter = va_arg(info->args, int);
	info->total_length += ft_putchar(letter);
}