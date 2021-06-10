#include "includes/ft_printf.h"

int	main ()
{
	int ret;

	ret = ft_printf("Just string\n");
	printf("ret 1: %d\n", ret);
	ret = ft_printf("Character: %c\n", 'A');
	printf("ret 2: %d\n", ret);
	ret = ft_printf("String: %s\n", "World1234");
	printf("ret 3: %d\n", ret);
	ret = ft_printf("Integer: %d\n", 123);
	printf("ret 4: %d\n", ret);
}