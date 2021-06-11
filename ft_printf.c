#include "includes/ft_printf.h"

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
		}
		if (*info->format == '%')
			ft_format_flag(info);
	}
	va_end(info->args);
	len = info->total_length;
	free(info);
	return (len);
}