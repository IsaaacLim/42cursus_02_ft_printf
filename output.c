#include <stdio.h>

// %[flag][width][.precision][length][specifier]

void	print_char(void)
{
	// Characters
	char	singleChar = 'X';
	int		num = 65;

	printf("-------------Characters------------\n");
	printf("%%c\t\t: %c\n", singleChar);
	printf("%%6c\t\t: %6c\n", singleChar);
	printf("%%-6c\t\t: %-6c\n", singleChar);
	printf("%%20c\t\t: %20c\n", singleChar);
	printf("%%*c  <-20,char\t: %*c\n", 20, singleChar);
	printf("%%*c  <-020,char\t: %*c\n", 020, singleChar);
	printf("%%-*c <-6,char\t: %-*c\n", 6, singleChar);
	printf("%%c   <-num'65'\t: %-3c\n", num);
	printf("%%0c\t\t: %6s\n", "-NA-");
	printf("%%06c\t\t: %6s\n", "-NA-");
	printf("%%6.0c\t\t: %6s\n", "-NA-");
	printf("%%6.1c\t\t: %6s\n", "-NA-");
	printf("%%6.3c\t\t: %6s\n", "-NA-");
	printf("%%6.*c\t\t: %6s\n", "-NA-");
	printf("%%06c\t\t: %06c\n", singleChar);
	printf("%%-06c\t\t: %-06c\n", singleChar);
	printf("%%6.0c\t\t: %6.0c\n", singleChar);
	printf("%%6.3c\t\t: %6.3c\n", singleChar);
	printf("%%-6.3c\t\t: %-6.3c\n", singleChar);
	printf("%%*6.3c\t\t: %*6.3c\n", 2, singleChar);

	printf("-----------Sub-Specifiers-----------\n");
	printf("flag\t\t-\t\tyes\n");
	printf("flag\t\t0\t\tno\n");
	printf("width\t\t<num>\t\tyes\n");
	printf("width\t\t*\t\tyes\n");
	printf("pre.s\t\t.<num>\t\tno\n");
	printf("pre.s\t\t.*\t\tno\n");
	printf("Note: %%c can input char or num\n");
}

void	print_str(void)
{
	// Strings
	char	*string = "Hello";

	printf("---------------String---------------\n");
	printf("%%s\t\t\t: %s\n", string);
	printf("%%10s\t\t\t: %10s\n", string);
	printf("%%-10s\t\t\t: %-10s\n", string);
	printf("%%1s\t\t\t: %1s\n", string);
	printf("%%-1s\t\t\t: %-1s\n", string);
	printf("%%-*s\t<- 10,str\t: %-*s\n", 10, string);
	printf("%%.4s\t\t\t: %.4s\n", string);
	printf("%%-.3s\t\t\t: %-.3s\n", string);
	printf("%%-.20s\t\t\t: %-.20s\n", string);
	printf("%%-1.3s\t\t\t: %-1.3s\n", string);
	printf("%%-10.3s\t\t\t: %-10.3s\n", string);
	printf("%%-10.0s\t\t\t: %-10.0s\n", string);
	printf("%%10.*s\t<- 2,str\t: %10.*s\n", 2, string);
	printf("%%*.*s\t<- 10,3,str\t: %*.*s\n", 10, 3, string);
	printf("%%0s\t\t\t: %10s\n", "-NA-");
	printf("%%06s\t\t\t: %10s\n", "-NA-");
	printf("%%s\t<- char\t\t: %10s\n", "-NA-");
	printf("%%s\t<- num\t\t: %10s\n", "-NA-");

	printf("-----------Sub-Specifiers-----------\n");
	printf("flag\t\t-\t\tyes\n");
	printf("flag\t\t0\t\tno\n");
	printf("width\t\t<num>\t\tyes\n");
	printf("width\t\t*\t\tyes\n");
	printf("pre.s\t\t.<num>\t\tyes\n");
	printf("pre.s\t\t.*\t\tyes\n");
	printf("Note: %%s strictly only for char *\n"); 
	printf("Note: only sub-specifier not allowed: '0'\n");
}

int		main(void)
{
	print_char();
	//print_str();
}
