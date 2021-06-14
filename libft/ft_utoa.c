#include "libft.h"

int	u_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	int		ulen;
	char	*str;

	ulen = u_len(n);
	str = ft_calloc(ulen + 1, 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[ulen-- -1] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
