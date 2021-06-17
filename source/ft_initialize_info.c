#include "../includes/ft_printf.h"

void	ft_initialize_info(t_print *info)
{
	info->argument_length = 0;
	info->dash = false;
	info->has_precision = false;
	info->hash = false;
	info->len_mod_l = false;
	info->len_mod_ll = false;
	info->len_mod_h = false;
	info->len_mod_hh = false;
	info->plus = false;
	info->precision = 0;
	info->space = false;
	info->total_length = 0;
	info->width = 0;
	info->zero = false;
}

void	ft_reset_arg_info(t_print *info)
{
	info->argument_length = 0;
	info->dash = false;
	info->has_precision = false;
	info->hash = false;
	info->len_mod_l = false;
	info->len_mod_ll = false;
	info->len_mod_h = false;
	info->len_mod_hh = false;
	info->plus = false;
	info->precision = 0;
	info->space = false;
	info->width = 0;
	info->zero = false;
}