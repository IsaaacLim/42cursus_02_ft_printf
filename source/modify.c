#include "../includes/ft_printf.h"

void	ft_mod_right_cs(t_print *info, int argument_len)
{
	while (info->width-- > argument_len)
		if (info->zero && !info->has_precision) //!precision is for %s
			info->total_length += ft_putchar('0');
		else
			info->total_length += ft_putchar(' ');
}

void	ft_mod_left_cs(t_print *info, int argument_len)
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