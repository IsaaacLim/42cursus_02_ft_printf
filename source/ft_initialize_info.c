#include "../includes/ft_printf.h"

void	ft_initialize_info(t_print *info)
{
	info->total_length = 0;
	info->width = 0;
	info->dash = false;
	info->zero = false;
}