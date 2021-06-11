#include "../includes/ft_printf.h"


void	ft_format_sub_specifier(t_print *info)
{
	char *itoa;

	if (*info->format == '-')
	{
		info->dash = true;
		info->format++;
	}
	if (*info->format == '0')
	{
		info->zero = true;
		info->format++;
	}
	if (ft_isdigit(*info->format))
	{
		info->width = ft_atoi(info->format);
		itoa = ft_itoa(info->width);
		info->format += ft_strlen(itoa);
		free (itoa);
	}
	if (*info->format == '*')
	{
		info->total_length += ft_putchar(*info->format);
		info->format++;
	}
}

void	ft_format_specifier(t_print *info)
{
	info->format++;
	ft_format_sub_specifier(info);
	if (*info->format == 'c')
		ft_output_char(info);
	if (*info->format == 's')
		ft_output_string(info);
	if (*info->format == 'd')
		ft_output_int(info);

	info->format++;
}