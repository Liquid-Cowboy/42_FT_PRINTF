#include "libftprintf.h"

int	print_digit(long n, int base)
{
	int		count;
	char	*base_digits = "0123456789abcdef";
	
	count = 0;
	if (n < 0)
	{
		print_char('-');
		n = -n;
		count += 1;
	}
	if (n >= base)
		count += print_digit(n / base, base);
	count += print_char(base_digits[n % base]);
	return (count);
}
