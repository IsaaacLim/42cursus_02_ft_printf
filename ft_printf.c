#include "includes/ft_printf.h"

int		ft_printf(const char *format, ...);

int	main ()
{
	int ret;

	ret = ft_printf("HBO\n");
	printf("ret 1: %d\n", ret);
	ret = ft_printf("Hello %s\n", "World123");
	printf("ret 2: %d\n", ret);
	ret = ft_printf("Hello %c\n", 'A');
	printf("ret 3: %d\n", ret);
}


void	ft_format_specifier(t_print *info)
{
	char	letter;
	char	*string;

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
	info->format++;
}

int	ft_printf(const char *format, ...)
{
	t_print	*info;
	int		len;

	info = (t_print *)ft_calloc(1, sizeof(t_print));
	if (!info)
		return (-1);
	ft_initialize_info(info);
	va_start(info->args, format);
	info->format = format;
	while(*info->format)
	{
		while (*info->format != '%' && *info->format != '\0')
		{
			info->total_length += ft_putchar(*info->format);
			info->format++;
			//info->total_length++;
		}
		if (*info->format == '%')
			ft_format_specifier(info);
	}
	va_end(info->args);
	len = info->total_length;
	free(info);
	return (len);
}