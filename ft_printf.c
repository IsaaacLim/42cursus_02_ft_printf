#include "includes/ft_printf.h"

int		ft_printf(const char *format, ...);

int	main ()
{
	ft_printf("Hello\n");
	ft_printf("Hello %s\n", "World123\0");
}


void	ft_format_specifier(t_print *info)
{
	char *string;

	info->format++;
	if (*info->format == 's')
		string = va_arg(info->args, char *);
	ft_putstr(string);
	info->format++;
}

int	ft_printf(const char *format, ...)
{
	t_print	*info;
	int		len;

	info = (t_print *)ft_calloc(1, sizeof(t_print));
	if (!info)
		return (-1);
	va_start(info->args, format);
	info->format = format;
	while(*info->format)
	{
		while (*info->format != '%' && *info->format != '\0')
		{
			ft_putchar(*info->format);
			info->format++;
			//info->total_length++;
		}
		if (*info->format == '%')
			ft_format_specifier(info);
	}
	va_end(info->args);
	len = 1;
	//len = info->lenght;
	free(info);
	return (len);
}