#include "../includes/ft_printf.h"

void	ft_output_char(t_print *info)
{
	char letter;

	letter = va_arg(info->args, int);
	if(info->width && !info->dash)
		ft_mod_right_c(info);
	info->total_length += ft_putchar(letter);
	if (info->width && info->dash)
		ft_mod_left_c(info);
}