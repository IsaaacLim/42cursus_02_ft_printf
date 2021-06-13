#include "../includes/ft_printf.h"

/* *************************************** */
/* Print sequence:	| Criteria:
/* 1. right spaces	| !dash && (width > num_len && width > precision + neg)
/* 2. neg sign		| num < 0
/* 3. zeros			| (zero && !precision) || precision > absolute
/* 4. arg values	| absolute
/* 5. left spaces	| width > absolute && dash
/*
/* Example:
/* -000000123456$
/*      -123456$ // big width, no zero, or precision < ft_strlen(abs_itoa)
/*   -0000123456$ // big width, precision > ft_strlen(abs_itoa)
/* -0000123456$ // small width, precision > ft_strlen(abs_itoa)
/* -123456$ //default	
/* -123456      $ //  big width, no zero, or precision < absolute, dash
/* -0001234     $ // big width, precision > ft_strlen(abs_itoa) , dash
/*
/*
/*
/*
/*
/* *************************************** */
void	ft_output_int(t_print *info)
{
	int		number;
	char	*itoa;
	int		i;

	int		abs;
	int		neg;
	int		num_len;

	
	number = va_arg(info->args, int);
	itoa = ft_itoa(number);
	neg = 0;
	abs = number;
	if (number < 0)
		{
			//abs = ft_abs(number);
			abs = number * -1;
			neg = 1;
			//printf("neg num\n");
		}

	num_len = ft_strlen(itoa);
	if (!info->dash && (!info->zero || info->has_precision))
	{
		//printf("dash\n");
		while (info->width > num_len && info->width > (info->precision + neg))
		{
			info->argument_length += ft_putchar(' ');
			info->width--;
		}
	}
	i = 0;
	if (neg)
	{
		info->argument_length += ft_putchar('-');
		i++;
	}
	/*if (info->zero)
		printf("zero\n");
	if (!info->has_precision)
		printf("no precision\n");
	*/
	if ((info->zero && !info->has_precision && !info->dash))
	{
		//printf("width: %d\n", info->width);
		//printf("num_len: %d\n", num_len);
		while (info->width-- > num_len)
			info->argument_length += ft_putchar('0'); 
	}
	else if (info->has_precision)
	{
		while (info->precision-- > ft_strlen(&itoa[i]))
			info->argument_length += ft_putchar('0');
	}
	//printf("tot_len 1: %d\n", info->total_length);
	info->argument_length += ft_putstr(&itoa[i]);
	//printf("tot_len 2: %d\n", info->total_length);
	info->total_length += info->argument_length;
	//str_len = info->argument_length;
	//printf("width: %d\n", info->width);
	//printf("num_len: %d\n", str_len);
	while (info->width-- > info->argument_length)
		info->total_length += ft_putchar(' ');

	free(itoa);
}

/*	
	//Eval if precision > total_length, remove precision flag to allow zero
	int abs;
	char *itoa_abs;
	if (number < 0)
		abs = number * -1;
	else
		abs = number;
	itoa_abs = ft_itoa(abs);
	if (info->precision > ft_strlen(itoa_abs))
		info->has_precision = false;
	free(itoa_abs);
	//Eval for where to put '-' sign
	if (number < 0 && info->zero && !info->has_precision)
			info->total_length += ft_putchar(itoa[i++]);


	//Standard print
	if (info->width && !info->dash)
		ft_mod_right_digit(info, ft_strlen(itoa));
	info->total_length += ft_putstr(&itoa[i]);
	if (info->width && info->dash)
		ft_mod_left_digit(info, ft_strlen(itoa));
	
*/