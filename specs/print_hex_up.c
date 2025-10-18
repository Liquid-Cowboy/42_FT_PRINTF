#include "libftprintf.h"

int	print_hex_up(long n, int base)
{
	int		count;
	char	*base_digits = "0123456789ABCDEF";
	
	count = 0;
	if (n >= base)
		count += print_hex_up(n / base, base);
	count += print_char(base_digits[n % base]);
	return (count);
}
