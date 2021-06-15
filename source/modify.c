#include "../includes/ft_printf.h"

void	ft_mod_right_alpha(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
		if (info->zero && !info->has_precision) //!precision is for %s (followed Ed)
			info->total_length += ft_putchar('0');
		else
			info->total_length += ft_putchar(' ');
}

void	ft_mod_left_alpha(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
		info->total_length += ft_putchar(' ');
}

void	ft_mod_right_digit(t_print *info, char *itoa, int neg)
{
	int num_len;

	num_len = ft_strlen(itoa);
	if (!info->dash && (!info->zero || info->has_precision))
	{
		while (info->width > num_len && info->width > (info->precision + neg))
		{
			info->argument_length += ft_putchar(' ');
			info->width--;
		}
	}
	if (neg)
		info->argument_length += ft_putchar('-');
	if ((info->zero && !info->has_precision && !info->dash))
	{
		while (info->width-- > num_len)
			info->argument_length += ft_putchar('0'); 
	}
	else if (info->has_precision)
	{
		while (info->precision-- > (int)ft_strlen(&itoa[neg]))
			info->argument_length += ft_putchar('0');
	}
}

void	ft_mod_right_pointer(t_print *info, char *ulltoa)
{
	int num_len;

	num_len = ft_strlen(ulltoa);
	num_len += 2;
	if (!info->dash && (!info->zero || info->has_precision))
	{
		while (info->width > num_len && info->width > (info->precision + 2))
		{
			info->argument_length += ft_putchar(' ');
			info->width--;
		}
	}
	info->argument_length += ft_putstr("0x");
	if ((info->zero && !info->has_precision && !info->dash))
	{
		while (info->width-- > num_len)
			info->argument_length += ft_putchar('0'); 
	}
	else if (info->has_precision)
	{
		while (info->precision-- > (int)ft_strlen(ulltoa))
			info->argument_length += ft_putchar('0');
	}
}

void	ft_mod_left_digit(t_print *info)
{
	while (info->width-- > info->argument_length)
			info->total_length += ft_putchar(' ');
}

void	ft_mod_precision(t_print *info, char **string)
{
	char *temp;

	if (info->precision == 0)
		temp = ft_calloc(1, 1);
	else if (info->precision < (int)ft_strlen(*string))
		temp = ft_strndup(*string, (info->precision + 1));
	else
		temp = ft_strdup(*string);
	*string = temp;
}
