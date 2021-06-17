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
	if (info->plus)
	{	
		if (info->dash)
			info->total_length += ft_putchar('+');
		while (info->width-- > 1)
			info->total_length += ft_putchar(' ');
		if (!info->dash)
			info->total_length += ft_putchar('+');
	}
	else if (info->space && info->width == 0)
		info->total_length += ft_putchar(' ');
	while (info->width-- > 0)
		info->total_length += ft_putchar(' ');
}

void	ft_output_int(t_print *info)
{
	//l == long
	//ll == long long
	//h = short
	//hh = signed char
	//take only in the form of signed, int, long, short, x2
	//lltoa & va(long long)works for all; Test more in this.
	char	*itoa;
	long long 	number; //change this for each case
	int		neg;
	number = va_arg(info->args, long long); //can keep as long long
	if (info->len_mod_l)
		number = (long)number;
	else if (info->len_mod_h)
		number = (short)number;
	else if (info->len_mod_hh)
		number = (signed char)number;
	else if (!info->len_mod_ll)
		number = (int)number;
	//number = va_arg(info->args, int);
	//number = ft_eval_length_modifier(info, number);
	if (info->has_precision && info->precision == 0 && number == 0)
		ft_output_blank(info);
	else
	{
		itoa = ft_lltoa(number);
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
	if (info->has_precision && info->precision == 0 && number == 0)
		ft_output_blank(info);
	else
	{	
		utoa = ft_utoa(number);
		ft_mod_right_digit(info, utoa, 0);
		info->argument_length += ft_putstr(utoa);
		info->total_length += info->argument_length;
		ft_mod_left_digit(info);
		free(utoa);
	}
}

void	ft_output_hex(t_print *info)
{
	char	*utoa_hex;
	unsigned int		number;
	
	number = va_arg(info->args, unsigned int);
	if (info->has_precision && info->precision == 0 && number == 0)
		ft_output_blank(info);
	else
	{
		utoa_hex = ft_utoa_hex(number);
		if (*info->format == 'X')
			ft_toupper(utoa_hex);
		if (info->hash && number != 0)
			ft_mod_right_pointer(info, utoa_hex);
		else
			ft_mod_right_digit(info, utoa_hex, 0);	
		info->argument_length += ft_putstr(utoa_hex);
		info->total_length += info->argument_length;
		ft_mod_left_digit(info);
		free(utoa_hex);
	}
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