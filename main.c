#include "includes/ft_printf.h"

void	print_char(void)
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
	
/*	ft_printf("----------Specifiers Usage--------\n");
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
*/
}

void	print_string(void)
{
	char *string = "Ab12!?"; //test with empty string

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
	ft_printf("%%*.*s   <- 10,3,str\t: %*.*s\n", 10, 3, string);
	//ft_printf("%%10.*s <-08,char\t: %10.*s\n", 08, string); //can't run => invalid, octal constant?
	
	ft_printf("---Dash & Width & Precision---\n");
	ft_printf("%%-.3s\t\t\t: %-.3s\n", string);
	ft_printf("%%-.20s\t\t\t: %-.20s\n", string);
	ft_printf("%%-10.3s\t\t\t: %-10.3s\n", string);
	ft_printf("%%-*.*s   <-10,3,str\t: %-*.*s\n", 10, 3, string);
	
	ft_printf("-Zero & Width & Precision--> Can't compile-\n"); //check if 0 should be printed
	ft_printf("%%010.0s\t\t: %010.0s\n", string); //modi mod_cs so that it won't print 0s
	ft_printf("%%010.1s\t\t: %010.1s\n", string);
	ft_printf("%%010.6s\t\t: %010.6s\n", string);
	ft_printf("%%010.10s\t: %010.10s\n", string);
	ft_printf("%%010.13s\t: %010.13s\n", string);

/*	ft_printf("----------Specifiers Usage--------\n");
	ft_printf("flag\t\t-\t\tyes\n");
	ft_printf("flag\t\t0\t\tsupposedly no\n");
	ft_printf("width\t\t<num>\t\tyes\n");
	ft_printf("width\t\t*\t\tyes\n");
	ft_printf("pre.s\t\t.<num>\t\tyes\n");
	ft_printf("pre.s\t\t.*\t\tyes\n");

	//	STILL NOT HANDLED
	printf("------------Weird-Combos--doesn't compile--------\n");
	ft_printf("%%10.-3s\t\t: %10.-3s\n", string);
	ft_printf("%%0010s\t\t: %0010s\n", string);
	ft_printf("%%0006s\t\t: %0006s\n", string);
	ft_printf("%%6*s   <-2,char\t: %6*s\n", 2, string); //check again.Currently * overrides 6
	ft_printf("%%6*.s <-2,char\t: %6*.s\n", 2, string); //check again
	ft_printf("%%.2*s  <-3,char\t: %.2*s\n", 3, string); //check again
	ft_printf("%%*6s   <-9,char\t: %*6s\n", 9, string);
	ft_printf("%%*06s  <-9,char\t: %*06s\n", 9, string);	
	ft_printf("%%*-6s  <-9,char\t: %*-6s\n", 9, string);
	ft_printf("%%0-6s\t\t: %0-6s\n", string);
	ft_printf("%%*0-6s <-9,char\t: %*0-6s\n", 9, string);
	ft_printf("%%*0s  <-1,char\t: %*0s\n", 0, string);//invalid specifier, not cuz of '0'
	ft_printf("%%*6.s\t\t: %*6.s\n", 2, string);
	ft_printf("%%.*6s <-1,char\t: %.*6s\n", 1, string);
	ft_printf("%%0%%6s\t\t: %0%6s\n", string); //"lacks type at end of format"
	ft_printf("%%q%%6s\t\t: %q%6s\n", string); //"unused argument"
	ft_printf("%%q%%6s\t\t: %q%6s\n"); //WILL PRINT %6s
	ft_printf("%%r%%6s\t\t: %r%6s\n"); //"unknown conversion type character"
	ft_printf("%%-6-s\t\t: %-6-s\n", string); //"unknown conversion type character"
	ft_printf("%%-0*6.3*s <-2,5,s: %-0*6.3*s\n", 2, 5, string); //"unknown conversion type character"
	ft_printf("%%-06*.3*s <-2,5,s: %-06*.3*s\n", 2, 5, string); //"unknown conversion type character"
	ft_printf("%%-0*6.*s <-2,5,s: %-0*6.*s\n", 2, 5, string); //"unknown conversion type character"	
*/	
} 


void	print_int(void)
{
	int num_arr[] = {
		0, 				// [0]
		213456, 		// [1]
		-2147483648, 		// [2]
		2147483647		// [3]
		//-2147483648.567,	// [4]
		//2147483647.567		// [5]
		};

	//Overflow
	//int Smin = -2147483649; //gcc warning
	//int Smax = 2147483648;

	int num = num_arr[2];
	ft_printf("============INTEGERS %%id============\n");
	ft_printf("-------BONUSES-------\n");
	ft_printf("%%  0d\t\t: % 0d\n", num); //test with num = 0
	ft_printf("%%0  d\t\t: %0 d\n", num); //test with num = 0
	ft_printf("%% 13d\t\t: % 13d\n", num);
	ft_printf("%% 13.d\t\t: % 13.d\n", num); //test with num = 0
	ft_printf("%% 13.0d\t\t: % 13.0d\n", num); //test with num = 0
	ft_printf("%% 13.9d\t\t: % 13.9d\n", num);
 	ft_printf("%% 13.10d\t: % 13.10d\n", num);
 	ft_printf("%% 13.12d\t: % 13.12d\n", num);
 	ft_printf("%% 13.13d\t: % 13.13d\n", num);
	ft_printf("%% 13.14d\t: % 13.14d\n", num);
 	ft_printf("%% -13d\t\t: % -13d\n", num);  //test with num = 0
	ft_printf("%% -13.d\t\t: % -13.d\n", num);  //test with num = 0
 	ft_printf("%% -13.9d\t: % -13.9d\n", num);
 	ft_printf("%% -13.10d\t: % -13.10d\n", num);
 	ft_printf("%%- 13.12d\t: %- 13.12d\n", num);
 	ft_printf("%%- 13.13d\t: %- 13.13d\n", num);
 	ft_printf("%%- 13.14d\t: %- 13.14d\n", num);
	ft_printf("%%0 13d\t\t: %0 13d\n", num); 
	ft_printf("%% 013d\t\t: % 013d\n", num); 
	ft_printf("%% *.*d <-0,0,n\t: % *.*d\n", 0, 0, num); //test with num = 0
	ft_printf("%% *.*d <--0,0,n\t: % *.*d\n", -0, 0, num); //test with num = 0
	ft_printf("%% *.*d <-0,-0,n\t: % *.*d\n", 0, -0, num); //test with num = 0
	ft_printf("%% *.*d<--13,0,n\t: % *.*d\n", -13, 0, num); //test with num = 0
	ft_printf("%% *.*d <--13,4,n: % *.*d\n", -13, 4, num);
	ft_printf("%%- *.*d <--13,4,n: %- *.*d\n", -13, 4, num);
	ft_printf("%% *.*d <-13,4,n\t: % *.*d\n", 13, 4, num);
	ft_printf("%% *.*d <-0,-4,n\t: % *.*d\n", 0, -4, num);
	ft_printf("%% *.*d <-13,-4,n: % *.*d\n", 13, -4, num); //test with num = 0
	ft_printf("%% *.*d <-13,-15,n: % *.*d\n", 13, -15, num); //test with num = 0
	ft_printf("%% *.*d<--13,-15,n: % *.*d\n", -13, -15, num); //test with num = 0

	/*ft_printf("-------Quick Summary-------\n");
	ft_printf("%%0d\t\t: %0d\n", num); //test with num = 0
	ft_printf("%%00d\t\t: %00d\n", num); //test with num = 0
	ft_printf("%%0.d\t\t: %0.d\n", num); //test with num = 0
	ft_printf("%%00.d\t\t: %00.d\n", num); //test with num = 0
	ft_printf("%%0.0d\t\t: %0.0d\n", num); //test with num = 0
	ft_printf("%%13d\t\t: %13d\n", num);
	ft_printf("%%13.d\t\t: %13.d\n", num); //test with num = 0
	ft_printf("%%13.0d\t\t: %13.d\n", num); //test with num = 0
	ft_printf("%%13.9d\t\t: %13.9d\n", num);
 	ft_printf("%%13.10d\t\t: %13.10d\n", num);
 	ft_printf("%%13.12d\t\t: %13.12d\n", num);
 	ft_printf("%%13.13d\t\t: %13.13d\n", num);
	ft_printf("%%13.14d\t\t: %13.14d\n", num);
 	ft_printf("%%-13d\t\t: %-13d\n", num);  //test with num = 0
	ft_printf("%%-013.d\t\t: %-013.d\n", num);  //test with num = 0
 	ft_printf("%%-13.9d\t\t: %-13.9d\n", num);
 	ft_printf("%%-13.10d\t: %-13.10d\n", num);
 	ft_printf("%%-13.12d\t: %-13.12d\n", num);
 	ft_printf("%%-13.13d\t: %-13.13d\n", num);
 	ft_printf("%%-13.14d\t: %-13.14d\n", num);
	ft_printf("%%013d\t\t: %013d\n", num); 
	ft_printf("%%013.d\t\t: %013.0d\n", num);  //test with num = 0
 	ft_printf("%%013.9d\t\t: %013.9d\n", num);
	ft_printf("%%013.10d\t: %013.10d\n", num);
	ft_printf("%%013.12d\t: %013.12d\n", num);
	ft_printf("%%013.13d\t: %013.13d\n", num);
 	ft_printf("%%013.14d\t: %013.14d\n", num);
	ft_printf("%%*.*d <-0,0,n\t: %*.*d\n", 0, 0, num); //test with num = 0
	ft_printf("%%*.*d <--0,0,n\t: %*.*d\n", -0, 0, num); //test with num = 0
	ft_printf("%%*.*d <-0,-0,n\t: %*.*d\n", 0, -0, num); //test with num = 0
	ft_printf("%%*.*d <--13,0,n\t: %*.*d\n", -13, 0, num); //test with num = 0
	ft_printf("%%*.*d <--13,4,n\t: %*.*d\n", -13, 4, num);
	ft_printf("%%-*.*d <--13,4,n: %-*.*d\n", -13, 4, num);
	ft_printf("%%*.*d <-13,4,n\t: %*.*d\n", 13, 4, num);
	ft_printf("%%*.*d <-0,-4,n\t: %*.*d\n", 0, -4, num);
	ft_printf("%%*.*d <-13,-4,n\t: %*.*d\n", 13, -4, num); //test with num = 0
	ft_printf("%%*.*d <-13,-15,n: %*.*d\n", 13, -15, num); //test with num = 0
	ft_printf("%%*.*d<--13,-15,n: %*.*d\n", -13, -15, num); //test with num = 0
	*//*	
	ft_printf("--------Dash & Width--------\n");
	ft_printf("%%d\t\t: %d\n", num);
	ft_printf("%%13d\t\t: %13d\n", num);
	ft_printf("%%-13d\t\t: %-13d\n", num);
	ft_printf("%%3d\t\t: %3d\n", num);
	ft_printf("%%-3d\t\t: %-3d\n", num);
	ft_printf("%%*d  <-13,num\t: %*d\n", 13, num);
	ft_printf("%%-*d <-13,num\t: %-*d\n", 13, num);
	ft_printf("%%*d <-0013,num\t: %*d\n", 0013, num);//prints as %12s
	ft_printf("%%-*d <-020,num\t: %-*d\n", 020, num); //just takes as -20
	ft_printf("%%0d\t\t: %0d\n", num); //taken as width

	ft_printf("--------Zero & Width--------\n");
	ft_printf("%%015i\t\t: %015i\n", num); 
	ft_printf("%%06i\t\t: %06i\n", num);
	ft_printf("%%0*i  <-15,char\t: %0*i\n", 15, num);
	ft_printf("%%-015i\t\t: %-015i\n", num);
	ft_printf("%%006i\t\t: %006i\n", num);
	ft_printf("%%00015i\t\t: %00015i\n", num);

	ft_printf("------Dash & Precision------\n");
	ft_printf("%%.d\t\t: %.d\n", num);
	ft_printf("%%.2d\t\t: %.2d\n", num);
	ft_printf("%%.4d\t\t: %.4d\n", num);
	ft_printf("%%.5d\t\t: %.5d\n", num);
	ft_printf("%%.6d\t\t: %.6d\n", num);
	ft_printf("%%.10d\t\t: %.10d\n", num);
	ft_printf("%%.11d\t\t: %.11d\n", num);
	ft_printf("%%.12d\t\t: %.12d\n", num);
	ft_printf("%%.13d\t\t: %.13d\n", num);
	ft_printf("%%.14d\t\t: %.14d\n", num);
	ft_printf("%%-.d\t\t: %-.d\n", num);
	ft_printf("%%-.2d\t\t: %-.2d\n", num);
	ft_printf("%%-.4d\t\t: %-.4d\n", num);
	ft_printf("%%-.5d\t\t: %-.5d\n", num);
	ft_printf("%%-.6d\t\t: %-.6d\n", num);
	ft_printf("%%-.10d\t\t: %-.10d\n", num);
	ft_printf("%%-.11d\t\t: %-.11d\n", num);
	ft_printf("%%-.12d\t\t: %-.12d\n", num);
	ft_printf("%%-.13d\t\t: %-.13d\n", num);
	ft_printf("%%-.14d\t\t: %-.14d\n", num);
	*/
	/*	
	ft_printf("--Zero-Dash-Width-Precision--\n");
	ft_printf("%%13d\t\t: %13d\n", num);
	ft_printf("%%13.d\t\t: %13.d\n", num);
	ft_printf("%%13.0d\t\t: %13.0d\n", num);
	ft_printf("%%13.1d\t\t: %13.1d\n", num);
	ft_printf("%%13.2d\t\t: %13.2d\n", num);
	ft_printf("%%13.3d\t\t: %13.3d\n", num);
	ft_printf("%%13.4d\t\t: %13.4d\n", num);
	ft_printf("%%13.5d\t\t: %13.5d\n", num);
	ft_printf("%%13.6d\t\t: %13.6d\n", num);
	ft_printf("%%13.7d\t\t: %13.7d\n", num);
	ft_printf("%%13.8d\t\t: %13.8d\n", num);
	ft_printf("%%13.9d\t\t: %13.9d\n", num);
	ft_printf("%%13.10d\t\t: %13.10d\n", num);
	ft_printf("%%13.11d\t\t: %13.11d\n", num);
	ft_printf("%%13.12d\t\t: %13.12d\n", num);
	ft_printf("%%13.13d\t\t: %13.13d\n", num);
	ft_printf("%%13.14d\t\t: %13.14d\n", num);

	ft_printf("%%013d\t\t: %013d\n", num);
	ft_printf("%%013.d\t\t: %013.d\n", num);
	ft_printf("%%013.0d\t\t: %013.0d\n", num);
	ft_printf("%%013.1d\t\t: %013.1d\n", num);
	ft_printf("%%013.2d\t\t: %013.2d\n", num);
	ft_printf("%%013.3d\t\t: %013.3d\n", num);
	ft_printf("%%013.4d\t\t: %013.4d\n", num);
	ft_printf("%%013.5d\t\t: %013.5d\n", num);
	ft_printf("%%013.6d\t\t: %013.6d\n", num);
	ft_printf("%%013.7d\t\t: %013.7d\n", num);
	ft_printf("%%013.8d\t\t: %013.8d\n", num);
	ft_printf("%%013.9d\t\t: %013.9d\n", num);
	ft_printf("%%013.10d\t: %013.10d\n", num);
	ft_printf("%%013.11d\t: %013.11d\n", num);
	ft_printf("%%013.12d\t: %013.12d\n", num);
	ft_printf("%%013.13d\t: %013.13d\n", num);
	ft_printf("%%13.14d\t\t: %13.14d\n", num);

	ft_printf("%%-13.i\t\t: %-13.i\n", num);
	ft_printf("%%-13.0i\t\t: %-13.0i\n", num);
	ft_printf("%%-13.1i\t\t: %-13.1i\n", num);
	ft_printf("%%-13.2i\t\t: %-13.2i\n", num);
	ft_printf("%%-13.3i\t\t: %-13.3i\n", num);
	ft_printf("%%-13.4i\t\t: %-13.4i\n", num);
	ft_printf("%%-13.5i\t\t: %-13.5i\n", num);
	ft_printf("%%-13.6i\t\t: %-13.6i\n", num);
	ft_printf("%%-13.7i\t\t: %-13.7i\n", num);
	ft_printf("%%-13.8i\t\t: %-13.8i\n", num);
	ft_printf("%%-13.9i\t\t: %-13.9i\n", num);
	ft_printf("%%-13.10i\t: %-13.10i\n", num);
	ft_printf("%%-13.11i\t: %-13.11i\n", num);
	ft_printf("%%-13.12i\t: %-13.12i\n", num);
	ft_printf("%%-13.13i\t: %-13.13i\n", num);
	ft_printf("%%-13.14i\t: %-13.14i\n", num);
	*/
	/*	
	ft_printf("---------All with Star-------\n");
	ft_printf("%%*.3d   <-5,num\t\t: %*.3d\n", 5, num);
	ft_printf("%%13.*d  <-2,num\t\t: %13.*d\n", 2, num);
	ft_printf("%%*.*d   <-013,13,num\t: %0*.*d\n", 013, 13, num);
	ft_printf("%%-*.*d  <-13,14,num\t: %-*.*d\n", 13, 14,num);

	ft_printf("---------Repeated Zeros-------\n");
	ft_printf("%%13.0010d\t: %13.0010d\n", num); //taken as 10
	ft_printf("%%13.00001d\t: %13.01d\n", num); //taken as 1
	ft_printf("%%13.013d\t: %13.013d\n", num); //taken as 13
	ft_printf("%%-013.013d\t: %-013.013d\n", num); //taken as -13.13
	ft_printf("%%-0013.08d\t: %-0013.08d\n", num); //taken as -13.8
	*/	

	//	STILL NOT HANDLED
	/*	
	printf("------------Weird-Combos--doesn't compile--------\n");
	ft_printf("%%10.-3i\t\t: %10.-3i\n", num);
	ft_printf("%%0010i\t\t: %0010i\n", num);
	ft_printf("%%0006i\t\t: %0006i\n", num);
	ft_printf("%%6*i   <-2,char\t: %6*i\n", 2, num); //check again.Currently * overridei 6
	ft_printf("%%6*.i <-2,char\t: %6*.i\n", 2, num); //check again
	ft_printf("%%.2*i  <-3,char\t: %.2*i\n", 3, num); //check again
	ft_printf("%%*6i   <-9,char\t: %*6i\n", 9, num);
	ft_printf("%%*06i  <-9,char\t: %*06i\n", 9, num);	
	ft_printf("%%*-6i  <-9,char\t: %*-6i\n", 9, num);
	ft_printf("%%0-6i\t\t: %0-6i\n", num);
	ft_printf("%%*0-6i <-9,char\t: %*0-6i\n", 9, num);
	ft_printf("%%*0i  <-1,char\t: %*0i\n", 0, num);//invalid specifier, not cuz of '0'
	ft_printf("%%*6.i\t\t: %*6.i\n", 2, num);
	ft_printf("%%.*6i <-1,char\t: %.*6i\n", 1, num);
	ft_printf("%%0%%6i\t\t: %0%6i\n", num); //"lacks type at end of format"
	ft_printf("%%q%%6i\t\t: %q%6i\n", num); //"unused argument"
	ft_printf("%%q%%6i\t\t: %q%6i\n"); //WILL PRINT %6s
	ft_printf("%%r%%6i\t\t: %r%6i\n"); //"unknown conversion type character"
	ft_printf("%%-6-i\t\t: %-6-i\n", num); //"unknown conversion type character"
	ft_printf("%%-0*6.3*i <-2,5,i: %-0*6.3*i\n", 2, 5, num); //"unknown conversion type character"
	ft_printf("%%-06*.3*i <-2,5,i: %-06*.3*i\n", 2, 5, num); //"unknown conversion type character"
	ft_printf("%%-0*6.*i <-2,5,i: %-0*6.*i\n", 2, 5, num); //"unknown conversion type character"	
	*/

}

void	print_unsigned_int(void)
{
	unsigned int num_arr[] = {
		0, 				// [0]
		4294967295,		// [1]
		-1,			 	// [2]
		-2147483648		// [3] //smallest neg, overflow to it's +ve value
		};
 	//Overflow
	//unsigned int dec = 123.789 // can't compile
	//unsinged int Smin = -2147483649; //can't compile
	//unsigned int Smax = 4294967296; //can't compile
	unsigned int num = num_arr[0];

	ft_printf("============UNSIGNED_INT %%u============\n");
	ft_printf("-------Quick Summary-------\n");
	ft_printf("%%0u\t\t: %0u\n", num); //test with num = 0
	ft_printf("%%00u\t\t: %00u\n", num); //test with num = 0
	ft_printf("%%0.u\t\t: %0.u\n", num); //test with num = 0
	ft_printf("%%00.u\t\t: %00.u\n", num); //test with num = 0
	ft_printf("%%0.0u\t\t: %0.0u\n", num); //test with num = 0
	ft_printf("%%13u\t\t: %13u\n", num);
	ft_printf("%%13.u\t\t: %13.u\n", num);
	ft_printf("%%13.0u\t\t: %13.0u\n", num);
	ft_printf("%%13.1u\t\t: %13.1u\n", num);
	ft_printf("%%13.9u\t\t: %13.9u\n", num);
 	ft_printf("%%13.10u\t\t: %13.10u\n", num);
 	ft_printf("%%13.12u\t\t: %13.12u\n", num);
 	ft_printf("%%13.13u\t\t: %13.13u\n", num);
 	ft_printf("%%13.14u\t\t: %13.14u\n", num);
 	ft_printf("%%-13u\t\t: %-13u\n", num);
	ft_printf("%%-013.u\t\t: %-013.u\n", num);
	ft_printf("%%-13.9u\t\t: %-13.9u\n", num);
 	ft_printf("%%-13.10u\t: %-13.10u\n", num);
 	ft_printf("%%-13.12u\t: %-13.12u\n", num);
 	ft_printf("%%-13.13u\t: %-13.13u\n", num);
 	ft_printf("%%-13.14u\t: %-13.14u\n", num);
	ft_printf("%%013u\t\t: %013u\n", num);
	ft_printf("%%013.0u\t\t: %013.0u\n", num);
 	ft_printf("%%013.9u\t\t: %013.9u\n", num);
	ft_printf("%%013.10u\t: %013.10u\n", num);
	ft_printf("%%013.12u\t: %013.12u\n", num);
	ft_printf("%%013.13u\t: %013.13u\n", num);
 	ft_printf("%%013.14u\t: %013.14u\n", num);
	ft_printf("%%-013.4u\t: %-013.4u\n", num);
	ft_printf("%%-013.14u\t: %-013.14u\n", num);
	ft_printf("%%*.*u <-13,14,n\t: %*.*u\n", 13, 14, num);
	ft_printf("%%*.*u <-0,0,n\t: %*.*u\n", 0, 0, num); //test with num = 0
	ft_printf("%%*.*u <--0,0,n\t: %*.*u\n", -0, 0, num); //test with num = 0
	ft_printf("%%*.*u <-0,-0,n\t: %*.*u\n", 0, -0, num); //test with num = 0
	ft_printf("%%*.*u <--13,0,n\t: %*.*u\n", -13, 0, num); //test with num = 0
	ft_printf("%%*.*u <--13,4,n\t: %*.*u\n", -13, 4, num);
	ft_printf("%%-*.*u <--13,4,n: %-*.*u\n", -13, 4, num);
	ft_printf("%%*.*u <-13,4,n\t: %*.*u\n", 13, 4, num);
	ft_printf("%%*.*u <-0,-4,n\t: %*.*u\n", 0, -4, num);
	ft_printf("%%*.*u <-13,-4,n\t: %*.*u\n", 13, -4, num); //test with num = 0
	ft_printf("%%*.*u <-13,-14,n: %*.*u\n", 13, -14, num); //test with num = 0
	ft_printf("%%*.*u<--13,-14,n: %*.*u\n", -13, -14, num); //test with num = 0

}

void	print_hex(void)
{
	unsigned int num_arr[] = {
		0, 				// [0]
		3153675467,		// [1]
		4294967295,		// [2]
		-1,			 	// [3]
		-2147483648		// [4] //smallest neg, overflow to it's +ve value
		};
 	//Overflow
	//unsigned int dec = 123.789 // can't compile
	//unsinged int Smin = -2147483649; //can't compile
	//unsigned int Smax = 4294967296; //can't compile
	unsigned int num = num_arr[1];

	ft_printf("==============HEX %%x%%X==============\n");
	ft_printf("-------Quick Summary-------\n");
	ft_printf("%%0x\t\t: %0x\n", num); //test with num = 0
	ft_printf("%%00x\t\t: %00x\n", num); //test with num = 0
	ft_printf("%%0.x\t\t: %0.x\n", num); //test with num = 0
	ft_printf("%%00.x\t\t: %00.x\n", num); //test with num = 0
	ft_printf("%%0.0x\t\t: %0.0x\n", num); //test with num = 0
	ft_printf("%%11x\t\t: %11x\n", num);
	ft_printf("%%11.x\t\t: %11.x\n", num); //test with num = 0
	ft_printf("%%11.0x\t\t: %11.x\n", num); //test with num = 0
	ft_printf("%%11.1x\t\t: %11.1x\n", num);
 	ft_printf("%%11.5x\t\t: %11.5x\n", num);
 	ft_printf("%%11.8x\t\t: %11.8x\n", num);
 	ft_printf("%%11.9x\t\t: %11.9x\n", num);
 	ft_printf("%%11.10x\t\t: %11.10x\n", num);
	ft_printf("%%11.11x\t\t: %11.11x\n", num);
	ft_printf("%%11.12x\t\t: %11.12x\n", num);
	ft_printf("%%11.13x\t\t: %11.13x\n", num);
	ft_printf("%%-11X\t\t: %-11X\n", num); //test with num = 0
	ft_printf("%%-011.X\t\t: %-011.X\n", num); //test with num = 0
	ft_printf("%%-11.8X\t\t: %-11.8X\n", num);
 	ft_printf("%%-11.9X\t\t: %-11.9X\n", num);
 	ft_printf("%%-11.10X\t: %-11.10X\n", num);
	ft_printf("%%-11.11X\t: %-11.11X\n", num);
 	ft_printf("%%-11.12X\t: %-11.12X\n", num);
 	ft_printf("%%-11.13X\t: %-11.13X\n", num);
 	ft_printf("%%-11.14X\t: %-11.14X\n", num);
	ft_printf("%%011x\t\t: %011x\n", num);
	ft_printf("%%011.0\t\t: %011.0x\n", num); //test with num = 0;
 	ft_printf("%%011.9x\t\t: %011.9x\n", num);
	ft_printf("%%011.10x\t: %011.10x\n", num);
	ft_printf("%%011.11x\t: %011.11x\n", num);
	ft_printf("%%011.12x\t: %011.12x\n", num);
	ft_printf("%%011.13x\t: %011.13x\n", num);
 	ft_printf("%%011.14x\t: %011.14x\n", num);
	ft_printf("%%-011.4x\t: %-011.4x\n", num);
	ft_printf("%%-011.14x\t: %-011.14x\n", num);
	ft_printf("%%*.*x <-11,14,n\t: %*.*x\n", 11, 14, num);
	ft_printf("%%*.*x <-0,0,n\t: %*.*x\n", 0, 0, num); //test with num = 0
	ft_printf("%%*.*X <--0,0,n\t: %*.*X\n", -0, 0, num); //test with num = 0
	ft_printf("%%*.*X <-0,-0,n\t: %*.*X\n", 0, -0, num); //test with num = 0
	ft_printf("%%*.*X <--11,0,n\t: %*.*X\n", -11, 0, num); //test with num = 0
	ft_printf("%%*.*X <--11,4,n\t: %*.*X\n", -11, 4, num);
	ft_printf("%%-*.*X <--11,4,n: %-*.*X\n", -11, 4, num);
	ft_printf("%%*.*X <-11,4,n\t: %*.*X\n", 11, 4, num);
	ft_printf("%%*.*X <-0,-4,n\t: %*.*X\n", 0, -4, num);
	ft_printf("%%*.*X <-11,-4,n\t: %*.*X\n", 11, -4, num); //test with num = 0
	ft_printf("%%*.*X <-11,-15,n: %*.*X\n", 11, -15, num); //test with num = 0
	ft_printf("%%*.*X<--11,-15,n: %*.*X\n", -11, -15, num); //test with num = 0

}

void	print_pointer(void)
{
	//oid *mem = NULL;

	ft_printf("============POINTER %%p============\n");
	/*ft_printf("-------Quick Summary-------\n");
	ft_printf("%%17.9p\t\t: %17.9p\n", mem);
 	ft_printf("%%17.15p\t\t: %17.15p\n", mem);
 	ft_printf("%%17.16p\t\t: %17.16p\n", mem);
 	ft_printf("%%17.17p\t\t: %17.17p\n", mem);
	ft_printf("%%17.18p\t\t: %16.18p\n", mem);
 	ft_printf("%%-16.9p\t\t: %-16.9p\n", mem);
 	ft_printf("%%-16.15p\t: %-16.15p\n", mem);
 	ft_printf("%%-16.16p\t: %-16.16p\n", mem);
 	ft_printf("%%-16.17p\t: %-16.17p\n", mem);
	ft_printf("%%-16.18p\t: %-16.18p\n", mem);
	ft_printf("%%016p\t\t: %016p\n", mem);
	ft_printf("%%016.p\t\t: %016.p\n", mem);
	ft_printf("%%016.1p\t\t: %016.4p\n", mem);
 	ft_printf("%%016.9p\t\t: %016.9p\n", mem);
	ft_printf("%%016.15p\t: %016.15p\n", mem);
	ft_printf("%%016.16p\t: %016.16p\n", mem);
 	ft_printf("%%016.17p\t: %016.17p\n", mem);	
	ft_printf("%%016.18p\t: %016.18p\n", mem);
	*/
	printf("Printf\t: %10p %-10p \n", NULL, NULL);
	ft_printf("ft_print\t: %10p %-10p \n", NULL, NULL);
}

void	mazoise(void)
{
	/*int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	*/
	int		a = 12;
	int		i = 8;

	ft_printf(" --- Return : %d\n", ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d", a, i, a, i, a, i, a, i, a, i));
	
}
int	main ()
{
	//int ret;

	//ret = ft_printf("Just string\n");
	//print_char();
	//print_string();
	print_int();
	//print_unsigned_int();
	//print_hex();
	//print_pointer();
	//mazoise();

	//printf("%10%\n");
	/*ret = ft_printf("%%*.c%c%%*.s*%ps%%*.X\n", '0', NULL);
	ft_printf("ret: %d\n", ret);
	*/
	//add test when no argument is given / incomplete number of arguments
}