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
	while (info->width-- > info->argument_length)
		info->total_length += ft_putchar(' ');
	free(itoa);
}