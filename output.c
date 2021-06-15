#include <stdio.h>

// %[flag][width][.precision][length][specifier]

int		main(void)
{
	//char character = 'a';
	//char *string = "abcd";
	//int		num = 0;
	//int		num2 = 17;
	unsigned int ui = 0;


	printf("11.0: %11.0x\n", ui);
	printf("011.0: %011.0x\n", ui);
}
