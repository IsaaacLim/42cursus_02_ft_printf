#include "../includes/ft_printf.h"

static void	ft_format_precision(t_print *info)
{
	char *itoa;

	info->format++;
	if (ft_isdigit(*info->format))
	{
		info->precision = ft_atoi(info->format);
		itoa = ft_itoa(info->precision);
		info->format += ft_strlen(itoa); //if  %.06c??
		free (itoa);
	} //if %.6*c?
	if (*info->format == '*')
	{
		info->precision = va_arg(info->args, int);
		info->format++;
	}
}
static void	ft_format_specifier(t_print *info)
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
		//while (*info->format == '0') //no need to iterate zeros, func don't handle
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
		info->format++;
	}
}

void		ft_format_flag(t_print *info)
{
	info->format++;
	ft_format_specifier(info);
	if (*info->format == '.')
		ft_format_precision(info);
	if (*info->format == 'c')
		ft_output_char(info);
	else if (*info->format == 's')
		ft_output_string(info);
	else if (*info->format == 'd')
		ft_output_int(info);
	else if (*info->format == '%')
		info->width += ft_putchar('%');
	else
		ft_putstr("-No format specifier found-"); //work on this
	info->format++;
}