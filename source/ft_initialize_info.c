#include "../includes/ft_printf.h"

void	ft_initialize_info(t_print *info)
{
	info->argument_length = 0;
	info->total_length = 0;
	info->width = 0;
	info->dash = false;
	info->has_precision = false;
	info->precision = 0;
	info->zero = false;
}