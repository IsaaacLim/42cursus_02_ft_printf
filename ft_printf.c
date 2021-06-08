#include "includes/ft_printf.h"

void	ft_printf(char *format, ...);

int	main ()
{
	ft_printf("Hello\n");
	ft_printf("Hello %s\n", "World123");
}


void	ft_printf(char *format, ...)
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
			write(1, format, 1);
			format++;
		}
	}
	va_end(VaList);
}