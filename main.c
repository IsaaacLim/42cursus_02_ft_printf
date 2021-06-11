#include "includes/ft_printf.h"

void	print_char(void)
{
	// Characters
	char	singleChar = 'X';
	int		num = 65;
	int 	ret;

	ft_printf("-------------Characters------------\n");
	ft_printf("%%c\t\t: %c\n", singleChar);
	ft_printf("%%6c\t\t: %6c\n", singleChar);
	ft_printf("%%-6c\t\t: %-6c\n", singleChar);
	ft_printf("%%20c\t\t: %20c\n", singleChar);
/*	printf("%%*c  <-20,char\t: %*c\n", 20, singleChar);
	printf("%%-*c <-6,char\t: %-*c\n", 6, singleChar);
	printf("%%c   <-num'%d'\t: %c\n", num, num);

	printf("------Output OK (with warning)------\n");
	printf("%%0c\t\t: %0c\n", singleChar);
	printf("%%-06c\t\t: %-06c\n", singleChar); //0 flag will be ignored
	printf("%%6.0c\t\t: %6.0c\n", singleChar); //presc no effect
	printf("%%6.3c\t\t: %6.3c\n", singleChar); //presc no effect
	printf("%%-6.3c\t\t: %-6.3c\n", singleChar); //presc no effect
	printf("%%6.*c <-5,char\t: %6.*c\n", 5, singleChar); //presc no effect

	printf("------------Guac-Specific-----------\n");
	printf("%%06c\t\t: %06c\n", singleChar);
	printf("%%0*c  <-6,char\t: %0*c\n", 6, singleChar);
	
	printf("------------Sub-Specifiers----------\n");
	printf("flag\t\t-\t\tyes\n");
	printf("flag\t\t0\t\tyes, (warning)\n");
	printf("width\t\t<num>\t\tyes\n");
	printf("width\t\t*\t\tyes\n");
	printf("pre.s\t\t.<num>\t\tno effect (warning)\n");
	printf("pre.s\t\t.*\t\tno effect (warning)\n");
	printf("Note: %%c can input char or num\n");

	printf("------------Weird-Combos------------\n");
	printf("%%*c  <-020,char\t: %*c\n", 020, singleChar);
	printf("%%*6.3c\t\t: %*6.3c\n", 2, singleChar); //weird outout
	printf("%%-0*6.3*c\t: %-0*6.3*c\n", 2, singleChar, 5); //what ever combo	
*/
}

void	print_string(void)
{
	int ret;

	ret = ft_printf("String: %s\n", "World1234");
//	printf("ret 3: %d\n", ret);
}

void	print_int(void)
{
	int ret;

	ret = ft_printf("Integer: %d\n", 123);
//	printf("ret 4: %d\n", ret);
}

int	main ()
{
	int ret;

	//ret = ft_printf("Just string\n");
	print_char();
}