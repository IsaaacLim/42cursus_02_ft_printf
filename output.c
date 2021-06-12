#include <stdio.h>

// %[flag][width][.precision][length][specifier]

void	print_char(void)
{
	// Characters
	char	singleChar = 'X';
	int		num = 65;

	printf("===========CHARACTER %%c===========\n");
	printf("--------Standard Specifiers--------\n");
	printf("%%c\t\t: %c\n", singleChar);
	printf("%%6c\t\t: %6c\n", singleChar);
	printf("%%-6c\t\t: %-6c\n", singleChar);
	printf("%%20c\t\t: %20c\n", singleChar);
	printf("%%*c  <-20,char\t: %*c\n", 20, singleChar);
	printf("%%-*c <-6,char\t: %-*c\n", 6, singleChar);
	printf("%%c   <-num'%d'\t: %c\n", num, num);
	printf("%%*c  <-006,char\t: %*c\n", 006, singleChar);//prints as %6c
	printf("%%*c  <-020,char\t: %*c\n", 020, singleChar); //just takes as 20

//	printf("---Specifiers That Doesn't compile---\n");
//	printf("%%0c\t\t: %0c\n", singleChar);
//	printf("%%06c\t\t: %06c\n", singleChar);
//	printf("%%0*c  <-6,char\t: %0*c\n", 6, singleChar);
//	printf("%%-06c\t\t: %-06c\n", singleChar);
//	printf("%%6.0c\t\t: %6.0c\n", singleChar);
//	printf("%%6.3c\t\t: %6.3c\n", singleChar);
//	printf("%%-6.3c\t\t: %-6.3c\n", singleChar);
//	printf("%%6.*c <-5,char\t: %6.*c\n", 5, singleChar);
//	printf("%%.06c\t\t: %.06c\n", singleChar);
//	printf("%%6.06c\t\t: %6.06c\n", singleChar);
//	printf("%%6.*c <-06,char\t: %6.*c\n", 06, singleChar);

	printf("----------Specifiers Usage--------\n");
	printf("flag\t\t-\t\tyes\n");
	printf("flag\t\t0\t\tno\n");
	printf("width\t\t<num>\t\tyes\n");
	printf("width\t\t*\t\tyes\n");
	printf("pre.s\t\t.<num>\t\tno\n");
	printf("pre.s\t\t.*\t\tno\n");
	printf("Note: %%c can input char or num\n");

//	printf("------------Weird-Combos--doesn't compile--------\n");
//	printf("%%006c\t\t: %006c\n", singleChar);
//	printf("%%0006c\t\t: %0006c\n", singleChar);
//	printf("%%6*c\t\t: %6*c\n", 2, singleChar);
//	printf("%%6*.3c\t\t: %6*.3c\n", 2, singleChar);
//	printf("%%.2*c <-3,char\t: %.2*c\n", 3, singleChar);
//	printf("%%*6c  <-1,char\t: %*6c\n", 1, singleChar);
//	printf("%%*0c  <-1,char\t: %*0c\n", 0, singleChar);//invalid specifier, not cuz of '0'
//	printf("%%*6.3c\t\t: %*6.3c\n", 2, singleChar);
//	printf("%%.*6c <-1,char\t: %.*6c\n", 1, singleChar);
//	printf("%%0%%6c\t\t: %0%6c\n", singleChar); //"lacks type at end of format"
//	printf("%%q%%6c\t\t: %q%6c\n", singleChar); //"unused argument"
//	printf("%%q%%6c\t\t: %q%6c\n"); //WILL PRINT %6c
//	printf("%%r%%6c\t\t: %r%6c\n"); //"unknown conversion type character"
//	printf("%%-6-c\t\t: %-6-c\n", singleChar); //"unknown conversion type character"
//	printf("%%-0*6.3*c <-2,5,c: %-0*6.3*c\n", 2, 5, singleChar); //"unknown conversion type character"
//	printf("%%-06*.3*c <-2,5,c: %-06*.3*c\n", 2, 5, singleChar); //"unknown conversion type character"
//	printf("%%-0*6.*3c <-2,5,c: %-0*6.*3c\n", 2, 5, singleChar); //"unknown conversion type character"	
}

int		main(void)
{
	print_char();
	//print_str();
}
