#include "includes/ft_printf.h"

int	main ()
{
	int ret;

	ret = ft_printf("HBO\n");
	printf("ret 1: %d\n", ret);
	ret = ft_printf("Hello %s\n", "World123");
	printf("ret 2: %d\n", ret);
	ret = ft_printf("Hello %c\n", 'A');
	printf("ret 3: %d\n", ret);
}