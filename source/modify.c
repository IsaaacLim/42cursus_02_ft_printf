#include "../includes/ft_printf.h"

void	ft_mod_right_cs(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
		if (info->zero)
			info->total_length += ft_putchar('0');
		else
			info->total_length += ft_putchar(' ');
}

void	ft_mod_left_cs(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
		info->total_length += ft_putchar(' ');
}