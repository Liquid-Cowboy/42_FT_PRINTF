#include "libftprintf.h"

int	print_str(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += print_char((int)*str);
		str++;
	}
	return (count);
}
