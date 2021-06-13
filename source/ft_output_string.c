#include "../includes/ft_printf.h"

void	ft_output_string(t_print *info)
{
	char	*string;

	string = va_arg(info->args, char *);
	if (info->has_precision)
			ft_mod_precision(info, &string);
	if (info->width && !info->dash)
		ft_mod_right_alpha(info, ft_strlen(string));
	info->total_length += ft_putstr(string);
	if (info->width && info->dash)
		ft_mod_left_alpha(info, ft_strlen(string));
	if (info->has_precision)
		free(string);
}