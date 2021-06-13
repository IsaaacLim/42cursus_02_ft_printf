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
			abs = number * -1;
			neg = 1;
		}

	num_len = ft_strlen(itoa);
	if (!info->dash && (!info->zero || info->has_precision))
	{
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
	if ((info->zero && !info->has_precision && !info->dash))
	{
		while (info->width-- > num_len)
			info->argument_length += ft_putchar('0'); 
	}
	else if (info->has_precision)
	{
		while (info->precision-- > ft_strlen(&itoa[i]))
			info->argument_length += ft_putchar('0');
	}
	info->argument_length += ft_putstr(&itoa[i]);
	info->total_length += info->argument_length;
	while (info->width-- > info->argument_length)
		info->total_length += ft_putchar(' ');

	free(itoa);
}