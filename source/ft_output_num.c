#include "../includes/ft_printf.h"

/* ************************************************************************ */
/* Print sequence:	| Criteria:												*/
/* 1. right spaces	| !dash && (width > num_len && width > precision + neg)	*/
/* 2. neg sign		| num < 0												*/
/* 3. zeros			| (zero && !precision) || precision > absolute			*/
/* 4. arg values	| absolute												*/
/* 5. left spaces	| width > absolute && dash								*/
/* *. If has_precision && precision==0 && num == 0, nothing exist.																			*/
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

void	ft_output_blank(t_print *info)
{
	while (info->width-- > 0)
		info->total_length += ft_putchar(' ');
}

void	ft_output_int(t_print *info)
{
	char	*itoa;
	int		number;
	int		neg;
	
	number = va_arg(info->args, int);
	if (info->has_precision && info->precision == 0 && number == 0)
		ft_output_blank(info);
	else
	{
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
	char	*utoa_hex;
	unsigned int		number;
	
	number = va_arg(info->args, unsigned int);
	utoa_hex = ft_utoa_hex(number);
	if (*info->format == 'X')
		ft_toupper(utoa_hex);
	ft_mod_right_digit(info, utoa_hex, 0);
	if (info->has_precision && info->precision < 0 && *utoa_hex == '0')//should be able to use numner
		info->argument_length += ft_putchar(' ');//
	else 	
		info->argument_length += ft_putstr(utoa_hex);
	info->total_length += info->argument_length;
	ft_mod_left_digit(info);
	free(utoa_hex);
}

void	ft_output_pointer(t_print *info)
{
	char	*ulltoa_hex;
	unsigned long long		number;
	
	number = (unsigned long long)va_arg(info->args, void *);
	ulltoa_hex = ft_ulltoa_hex(number);
	ft_mod_right_pointer(info, ulltoa_hex);
	info->argument_length += ft_putstr(ulltoa_hex);
	info->total_length += info->argument_length;
	ft_mod_left_digit(info);
	free(ulltoa_hex);
}