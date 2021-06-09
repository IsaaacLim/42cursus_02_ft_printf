#include "includes/ft_printf.h"

void	ft_printf(char *format, ...);

int	main ()
{
	ft_printf("Hello\n");
	ft_printf("Hello %s\n", "World123");
}


void	ft_format_specifier(char *format, ...)
{
	char *string;
	va_list VaList;

	va_start(VaList, format);

	while(*format)
	{
		if(*format == '%')
		{
			format++;
			if (*format == 's')
			{
				string = va_arg(VaList, char *);
				ft_putstr(string);
				format++;
			}
		}
		else
		{
			write(1, format, 1); //use putchar
			format++;
		}
	}
	va_end(VaList);
}

int	ft_printf(const char *format, ...)
{
	t_info	*info;
	int		len;

	info = (t_info *)ft_calloc(1, sizeof(t_info));
	if (!info)
		return NULL;
	va_start(info->args, format);
	info->format = format;
	while(*info->format)
	{
		while (*info->format != '%' || *info->format != '\0')
		{
			ft_putchar(*info->format); //get ft_putchar
			info->format++;
			info->total_length++;
		}
		else if (*info->format == '%')
			//xxx = va_arg(---va_list---, t_info); //seems like we'll use va_args in the other function it self
			ft_format_specifier(info);
	}
	va_end(info->args);
	len = info->lenght;
	free(info);
	return (len);
}