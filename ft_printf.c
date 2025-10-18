/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:26:41 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/18 18:47:59 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int	count;

//	%s , NULL  %P, NULL cobrir caso o parametro seja null( deve escrever "(null)" e devolver o count disto que escreveu (ver como funciona no printf original)

	va_start (ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_spec(*++format, ap);
		else	
			count += write (1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

#include <stdio.h>
#include <limits.h>
int	main()
{
	//int	count;
	printf("My name is %s, and I'm %d years old. I can count to %u. The hexadecimal for 42 is %x and %X and the negative version of that is %x and %X.\n", "John", 42, UINT_MAX, 42, 42, -42, -42);
	ft_printf("My name is %s, and I'm %d years old. I can count to %u. The hexadecimal for 42 is %x and %X and the negative version of that is %x and %X.\n", "John", 42, UINT_MAX, 42, 42, -42, -42);

//	count = ft_printf()
	return (0);
}
