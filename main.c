#include "includes/ft_printf.h"

/*void	print_char(void)
{
	// Characters
	char	singleChar = 'X';
	int		num = 65;

	ft_printf("===========CHARACTER %%c===========\n");
	ft_printf("--------Standard Specifiers--------\n");
	ft_printf("%%c\t\t: %c\n", singleChar);
	ft_printf("%%6c\t\t: %6c\n", singleChar);
	ft_printf("%%-6c\t\t: %-6c\n", singleChar);
	ft_printf("%%20c\t\t: %20c\n", singleChar);
	ft_printf("%%*c  <-20,char\t: %*c\n", 20, singleChar);
	ft_printf("%%-*c <-6,char\t: %-*c\n", 6, singleChar);
	ft_printf("%%c   <-num'%d'\t: %c\n", num, num);
	ft_printf("%%*c  <-006,char\t: %*c\n", 006, singleChar);//prints as %6c
	ft_printf("%%*c  <-020,char\t: %*c\n", 020, singleChar); //just takes as 20

	ft_printf("---Specifiers That Doesn't compile---\n");
	ft_printf("%%0c\t\t: %0c\n", singleChar);
	ft_printf("%%06c\t\t: %06c\n", singleChar);
	ft_printf("%%0*c  <-6,char\t: %0*c\n", 6, singleChar);
	ft_printf("%%-06c\t\t: %-06c\n", singleChar);
	ft_printf("%%6.0c\t\t: %6.0c\n", singleChar);
	ft_printf("%%6.3c\t\t: %6.3c\n", singleChar);
	ft_printf("%%-6.3c\t\t: %-6.3c\n", singleChar);
	ft_printf("%%6.*c <-5,char\t: %6.*c\n", 5, singleChar);
	ft_printf("%%.06c\t\t: %.06c\n", singleChar);
	ft_printf("%%6.06c\t\t: %6.07c\n", singleChar);
	ft_printf("%%6.*c <-07,char\t: %6.*c\n", 07, singleChar);
	//ft_printf("%%6.*c <-08,char\t: %6.*c\n", 08, singleChar); //invalid, octal constant?
	
	ft_printf("----------Specifiers Usage--------\n");
	ft_printf("flag\t\t-\t\tyes\n");
	ft_printf("flag\t\t0\t\tsupposedly no\n");
	ft_printf("width\t\t<num>\t\tyes\n");
	ft_printf("width\t\t*\t\tyes\n");
	ft_printf("pre.s\t\t.<num>\t\tno\n");
	ft_printf("pre.s\t\t.*\t\tno\n");
	ft_printf("Note: %%c can input char or num\n");

	//	STILL NOT HANDLED
	ft_printf("------------Weird-Combos--doesn't compile--------\n");
	ft_printf("%%006c\t\t: %006c\n", singleChar);
	ft_printf("%%0006c\t\t: %0006c\n", singleChar);
	ft_printf("%%6*c   <-2,char\t: %6*c\n", 2, singleChar); //check again.Currently * overrides 6
	ft_printf("%%6*.3c <-2,char\t: %6*.3c\n", 2, singleChar); //check again
	ft_printf("%%.2*c  <-3,char\t: %.2*c\n", 3, singleChar); //check again
	ft_printf("%%*6c   <-9,char\t: %*6c\n", 9, singleChar);
	ft_printf("%%*06c  <-9,char\t: %*06c\n", 9, singleChar);	
	ft_printf("%%*-6c  <-9,char\t: %*-6c\n", 9, singleChar);
	ft_printf("%%0-6c\t\t: %0-6c\n", singleChar);
	ft_printf("%%*0-6c <-9,char\t: %*0-6c\n", 9, singleChar);
	ft_printf("%%*0c  <-1,char\t: %*0c\n", 0, singleChar);//invalid specifier, not cuz of '0'
	ft_printf("%%*6.3c\t\t: %*6.3c\n", 2, singleChar);
	ft_printf("%%.*6c <-1,char\t: %.*6c\n", 1, singleChar);
	ft_printf("%%0%%6c\t\t: %0%6c\n", singleChar); //"lacks type at end of format"
	ft_printf("%%q%%6c\t\t: %q%6c\n", singleChar); //"unused argument"
	ft_printf("%%q%%6c\t\t: %q%6c\n"); //WILL PRINT %6c
	ft_printf("%%r%%6c\t\t: %r%6c\n"); //"unknown conversion type character"
	ft_printf("%%-6-c\t\t: %-6-c\n", singleChar); //"unknown conversion type character"
	ft_printf("%%-0*6.3*c <-2,5,c: %-0*6.3*c\n", 2, 5, singleChar); //"unknown conversion type character"
	ft_printf("%%-06*.3*c <-2,5,c: %-06*.3*c\n", 2, 5, singleChar); //"unknown conversion type character"
	ft_printf("%%-0*6.*3c <-2,5,c: %-0*6.*3c\n", 2, 5, singleChar); //"unknown conversion type character"	

} */

void	print_string(void)
{
	char *string = "Ab12!?";

	ft_printf("============STRING %%s============\n");
	ft_printf("--------Dash & Width--------\n");
	ft_printf("%%s\t\t: %s\n", string);
	ft_printf("%%10s\t\t: %10s\n", string);
	ft_printf("%%-10s\t\t: %-10s\n", string);
	ft_printf("%%3s\t\t: %3s\n", string);
	ft_printf("%%-3s\t\t: %-3s\n", string);
	ft_printf("%%*s  <-10,char\t: %*s\n", 10, string);
	ft_printf("%%-*s <-10,char\t: %-*s\n", 10, string);
	ft_printf("%%*s <-0012,char\t: %*s\n", 0012, string);//prints as %12s
	ft_printf("%%-*s <-020,char\t: %-*s\n", 020, string); //just takes as -20
	ft_printf("%%0s\t\t: %0s\n", string); //taken as width

	ft_printf("---Zero & Width---> Can't compile---\n"); //check if 0 should be printed
	ft_printf("%%010s\t\t: %010s\n", string); 
	ft_printf("%%06s\t\t: %06s\n", string);
	ft_printf("%%0*s  <-10,char\t: %0*s\n", 10, string);
	ft_printf("%%-010s\t\t: %-010s\n", string);
 
	ft_printf("------Width & Precision------\n");
	ft_printf("%%10.0s\t\t: %10.0s\n", string);
	ft_printf("%%10.3s\t\t: %10.3s\n", string);
	ft_printf("%%10.6s\t\t: %10.6s\n", string); //precision = strlen(string)
	ft_printf("%%10.10s\t\t: %10.10s\n", string); //will not print extra
	ft_printf("%%10.010s\t: %10.010s\n", string); //taken as 10
	ft_printf("%%10.0010s\t: %10.0010s\n", string); //taken as 10
	ft_printf("%%-10.3s\t\t: %-10.3s\n", string);
	ft_printf("%%10.*s <-5,char\t: %10.*s\n", 5, string);
	ft_printf("%%.06s\t\t: %.06s\n", string);
	ft_printf("%%10.06s\t\t: %10.06s\n", string);
	ft_printf("%%10.*s<-07,char\t: %10.*s\n", 07, string);
	//ft_printf("%%10.*s <-08,char\t: %10.*s\n", 08, string); //correct, can't run => invalid, octal constant?
	
	ft_printf("----------Specifiers Usage--------\n");
	ft_printf("flag\t\t-\t\tyes\n");
	ft_printf("flag\t\t0\t\tsupposedly no\n");
	ft_printf("width\t\t<num>\t\tyes\n");
	ft_printf("width\t\t*\t\tyes\n");
	ft_printf("pre.s\t\t.<num>\t\tyes\n");
	ft_printf("pre.s\t\t.*\t\tyes\n");

	//%10.-3s
	//%010.0s
}
/*
void	print_int(void)
{
	int ret;

	ret = ft_printf("Integer: %d\n", 123);
	printf("ret 4: %d\n", ret);
}
*/
int	main ()
{
	//int ret;

	//ret = ft_printf("Just string\n");
	//print_char();
	print_string();

	//add test when no argument is given / incomplete number of arguments
}