#include "../includes/ft_printf.h"

void	ft_format_specifier(t_print *info)
{
	char	letter;
	char	*string;
	int		number;

	info->format++;
	if (*info->format == 'c')
	{
		letter = va_arg(info->args, int);
		info->total_length += ft_putchar(letter);
	}
	if (*info->format == 's')
	{
		string = va_arg(info->args, char *);
		info->total_length += ft_putstr(string);
	}
	if (*info->format == 'd')
	{
		number = va_arg(info->args, int);
		string = ft_itoa(number);
		info->total_length += ft_putstr(string);
		free (string);
	}
	info->format++;
}