#include "../includes/ft_printf.h"

void	ft_output_int(t_print *info)
{
	int		number;
	char	*itoa;
	int		i;

	i = 0;
	number = va_arg(info->args, int);
	itoa = ft_itoa(number);
	if (number < 0)
			info->total_length += ft_putchar(itoa[i++]);
	if (info->width && !info->dash)
		ft_mod_right_digit(info, ft_strlen(itoa));
	info->total_length += ft_putstr(&itoa[i]);
	if (info->width && info->dash)
		ft_mod_left_digit(info, ft_strlen(itoa));
	free(itoa);
}