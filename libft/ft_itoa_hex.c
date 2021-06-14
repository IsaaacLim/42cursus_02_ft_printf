#include "libft.h"

int		ft_base_num_len(unsigned int dec_num, int base_len)
{
	int base_num_len;
	int	remainder;

	base_num_len = 1;
	remainder = dec_num / base_len;
	while (remainder > 0)
	{
		remainder /= base_len;
		base_num_len++;
	}
	return (base_num_len);
}

char	*ft_itoa_hex(unsigned int dec_num, char *base_to)
{
	char	*hex_alpha;
	int		hex_len;
	int		base_len;
	int		rev;

	base_len = ft_strlen(base_to);
	hex_len = ft_base_num_len(dec_num, base_len);

	if (!(hex_alpha = (char *)malloc((hex_len + 1) * sizeof(char))))
		return (NULL);
	rev = hex_len;
	while (--rev >= 0)
	{
		hex_alpha[rev] = base_to[dec_num % base_len];
		dec_num /= base_len;
	}
	hex_alpha[hex_len] = '\0';

	return (hex_alpha);
}

int	main(void)
{
	char *hex;
	char *base_to = "0123456789abcdef";

	hex = ft_itoa_hex(4294967295, base_to);
	printf("hex: %s\n", hex);
	free (hex);
}