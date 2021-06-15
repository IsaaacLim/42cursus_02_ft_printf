#include "../includes/ft_printf.h"

void	ft_format_precision(t_print *info)
{
	char *itoa;

	info->has_precision = true;
	info->format++;
	while (*info->format == '0' && ft_isdigit(*(info->format + 1))) //handle %.06s along with %.0s
		info->format++;
	if (ft_isdigit(*info->format))
	{
		info->precision = ft_atoi(info->format);
		itoa = ft_itoa(info->precision);
		info->format += ft_strlen(itoa);
		free (itoa);
	} //if %.6*c?
	if (*info->format == '*')
	{
		info->precision = va_arg(info->args, int);
		if (info->precision < 0)
			info->has_precision = false;
		info->format++;
	}
}
void	ft_format_specifier(t_print *info)
{
	char *itoa;

	if (*info->format == '-' && !info->dash)
	{
		info->dash = true;
		info->format++;
	}
	if (*info->format == '0' && !info->zero)
	{
		info->zero = true;
		while (*info->format == '0')
			info->format++;
	}
	if (ft_isdigit(*info->format))
	{
		info->width = ft_atoi(info->format);
		itoa = ft_itoa(info->width);
		info->format += ft_strlen(itoa);
		free (itoa);
	} //if %6*c?
	if (*info->format == '*')
	{
		info->width = va_arg(info->args, int);
		if (info->width < 0)
		{
			info->dash = true;
			info->width *= -1;
		}
		info->format++;
	}
}

void		ft_format_flag(t_print *info)
{
	ft_initialize_info(info);
	info->format++;
	ft_format_specifier(info);
	if (*info->format == '.')
		ft_format_precision(info);
	if (*info->format == 'c')
		ft_output_char(info);
	else if (*info->format == 's')
		ft_output_string(info);
	else if (*info->format == 'd' || *info->format == 'i')
		ft_output_int(info);
	else if (*info->format == 'u')
		ft_output_unsigned(info);
	else if (*info->format == 'x' || *info->format == 'X')
		ft_output_hex(info);
	else if (*info->format == 'p')
		ft_output_pointer(info);
	else if (*info->format == '%')
		info->width += ft_putchar('%');
	else
		ft_putstr("-No format specifier found-"); //work on this
	info->format++;
}