#include "../includes/ft_printf.h"

/* ************************************************************************ */
/* Print sequence:	| Criteria:												*/
/* 1. right spaces	| !dash && (width > num_len && width > precision + neg)	*/
/* 2. neg sign		| num < 0												*/
/* 3. zeros			| (zero && !precision) || precision > absolute			*/
/* 4. arg values	| absolute												*/
/* 5. left spaces	| width > absolute && dash								*/
/*																			*/
/* Example:																	*/
/* -000000123456$															*/
/*      -123456$															*/
/*   -0000123456$															*/
/* -0000123456$																*/
/* -123456$																	*/
/* -123456      $															*/
/* -0001234     $															*/
/* ************************************************************************ */
void	ft_output_int(t_print *info)
{
	char	*itoa;
	 int		number;
	int		neg;
	
	number = va_arg(info->args, int);
	itoa = ft_itoa(number);
	neg = 0;
	if (number < 0)
			neg = 1;
	ft_mod_right_digit(info, itoa, neg);
	info->argument_length += ft_putstr(&itoa[neg]);
	info->total_length += info->argument_length;
	ft_mod_left_digit(info);
	free(itoa);
}

void	ft_output_unsigned(t_print *info)
{
	char	*utoa;
	unsigned int		number;
	
	number = va_arg(info->args, unsigned int);
	utoa = ft_utoa(number);
	ft_mod_right_digit(info, utoa, 0);
	info->argument_length += ft_putstr(utoa);
	info->total_length += info->argument_length;
	ft_mod_left_digit(info);
	free(utoa);
}

void	ft_output_hex(t_print *info)
{
	char	*utoa;
	unsigned int		number;
	
	number = va_arg(info->args, unsigned int);
	utoa = ft_utoa_hex(number);
	ft_mod_right_digit(info, utoa, 0);
	info->argument_length += ft_putstr(utoa);
	info->total_length += info->argument_length;
	ft_mod_left_digit(info);
	free(utoa);
}