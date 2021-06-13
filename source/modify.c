#include "../includes/ft_printf.h"

void	ft_mod_right_alpha(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
		if (info->zero && !info->has_precision) //!precision is for %s
			info->total_length += ft_putchar('0');
		else
			info->total_length += ft_putchar(' ');
}

void	ft_mod_left_alpha(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
		info->total_length += ft_putchar(' ');
}

void	ft_mod_right_digit(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
		if (info->zero && !info->has_precision) //precision removes 0 flag
			info->total_length += ft_putchar('0');
		else
			info->total_length += ft_putchar(' ');
}

void	ft_mod_left_digit(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
			info->total_length += ft_putchar(' ');
}

void	ft_mod_precision(t_print *info, char **string)
{
	char *temp;

	if (info->precision == 0)
		temp = ft_calloc(1, 1);
	else if (info->precision < ft_strlen(*string))
		temp = ft_strndup(*string, (info->precision + 1));
	else
		temp = ft_strdup(*string);
	*string = temp;
}
/*
neg = 0;
abs = number;
if (number < 0)
	{
		abs = ft_abs(number);
		neg = 1;
	}

if (!dash)
	num_len = ft_strlen(itoa);
	while (info->width > num_len && info->width > (info->precision + neg))
	{
		info->total_length += ft_putchar(' ');
		info->width--;
	}
if (neg)
{
	total_length += ft_putchar('-');
	itoa++;
}
if ((info->zero && !info->has_precision))
{
	while (info->width-- > num_len)
		info->total_length += ft_putchar('0'); 
}
else if (info->has_precision)
{
	while (info->precision-- > ft_strlen(abs))
		info->total_length += ft_putchar('0');
}
info->total_length += ft_putstr(itoa);

		str_len = info->total_length;
		while (info->width-- > str_len)
			info->total_length += ft_putchar(' ');

free (itoa);
*/

