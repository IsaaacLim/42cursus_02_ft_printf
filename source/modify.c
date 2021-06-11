#include "../includes/ft_printf.h"

void	ft_mod_right_c(t_print *info)
{
	while (info->width-- > 1)
		info->total_length += ft_putchar(' ');
}

void	ft_mod_left_c(t_print *info)
{
	while (info->width-- > 1)
		info->total_length += ft_putchar(' ');
}