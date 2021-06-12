#include <stdio.h>

// %[flag][width][.precision][length][specifier]

void	print_char(void)
{
	// Characters
	char	singleChar = 'X';
//	int		num = 65;

/*	printf("-------------Characters------------\n");
	printf("%%c\t\t: %c\n", singleChar);
	printf("%%6c\t\t: %6c\n", singleChar);
	printf("%%-6c\t\t: %-6c\n", singleChar);
	printf("%%20c\t\t: %20c\n", singleChar);
	printf("%%*c  <-20,char\t: %*c\n", 20, singleChar);
	printf("%%-*c <-6,char\t: %-*c\n", 6, singleChar);
	printf("%%c   <-num'%d'\t: %c\n", num, num);
*/
//	printf("------Doesn't compile------\n");
//	printf("%%0c\t\t: %0c\n", singleChar);//no compile
//	printf("%%-06c\t\t: %-06c\n", singleChar); //0 flag will be ignored
//	printf("%%6.0c\t\t: %6.0c\n", singleChar); //presc no effect
//	printf("%%6.3c\t\t: %6.3c\n", singleChar); //presc no effect
//	printf("%%-6.3c\t\t: %-6.3c\n", singleChar); //presc no effect
//	printf("%%6.*c <-5,char\t: %6.*c\n", 5, singleChar); //presc no effect

//	printf("%%06c\t\t: %06c\n", singleChar);
//	printf("%%0*c  <-6,char\t: %0*c\n", 6, singleChar);
//	printf("%%006c\t\t: %006c\n", singleChar);
//	printf("%%0006c\t\t: %0006c\n", singleChar);
//
	//Works
	printf("%%*c  <-006,char\t: %*c\n", 006, singleChar);//prints as %6c
	printf("%%*c  <-020,char\t: %*c\n", 020, singleChar); //just takes as 20	
	
/*	printf("------------Sub-Specifiers----------\n");
	printf("flag\t\t-\t\tyes\n");
	printf("flag\t\t0\t\tno\n");
	printf("width\t\t<num>\t\tyes\n");
	printf("width\t\t*\t\tyes\n");
	printf("pre.s\t\t.<num>\t\tno\n");
	printf("pre.s\t\t.*\t\tno\n");
	printf("Note: %%c can input char or num\n");
*/
//	printf("------------Weird-Combos--doesn't compile--------\n");
//	printf("%%6*c\t\t: %6*c\n", 2, singleChar);
//	printf("%%6*.3c\t\t: %6*.3c\n", 2, singleChar);
//	printf("%%.06c\t\t: %.06c\n", singleChar);//okay but can't use precision
//	printf("%%6.06c\t\t: %6.06c\n", singleChar);//ok but no precision
//	printf("%%6.*c <-06,char\t: %6.*c\n", 06, singleChar);//okay but no precision
//	printf("%%.2*c <-3,char\t: %.2*c\n", 3, singleChar);
//	printf("%%*6c  <-1,char\t: %*6c\n", 1, singleChar);
//	printf("%%*0c  <-1,char\t: %*0c\n", 0, singleChar);//invalid specifier, not cuz of '0'
//	printf("%%*6.3c\t\t: %*6.3c\n", 2, singleChar);
//	printf("%%.*6c <-1,char\t: %.*6c\n", 1, singleChar);

	printf("-----------Unknown-Flags-----------\n");
//	printf("%%0%%6c\t\t: %0%6c\n", singleChar); //"lacks type at end of format" //WILL NOT COMPILE!	
//	printf("%%q%%6c\t\t: %q%6c\n", singleChar); //"lacks type at end of format"
//	printf("%%q%%6c\t\t: %q%6c\n"); //prints %6c
//	printf("%%r%%6c\t\t: %r%6c\n"); //"unknown conversion type character" WILL not compile
//	printf("%%-6-c\t\t: %-6-c\n", singleChar); //"unknown conversion type character"
//	printf("%%-0*6.3*c <-2,5,c: %-0*6.3*c\n", 2, 5, singleChar); //"unknown conversion type character"
//	printf("%%-06*.3*c <-2,5,c: %-06*.3*c\n", 2, 5, singleChar); //"unknown conversion type character"
//	printf("%%-0*6.*3c <-2,5,c: %-0*6.*3c\n", 2, 5, singleChar); //"unknown conversion type character"	

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
