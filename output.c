#include <stdio.h>

// %[flag][width][.precision][length][specifier]

int		main(void)
{
	int c = 'a';
	int *p = &c;
	*p = 'b';

	printf("%d\n", c);
}
