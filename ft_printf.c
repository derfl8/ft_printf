/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:25:00 by abegou            #+#    #+#             */
/*   Updated: 2025/11/17 16:49:43 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	format_check(const char format, va_list(args))
{
	int	len;

	len = 0;
	if (!format)
		return (0);
	else if (format == '%')
		len += ft_putchar(format);
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		len += ft_putstr(ft_itoa(va_arg(args, int)));
	else if (format == 'u')
		len += ft_putnbr(va_arg(args, unsigned int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while(format[i])
	{
		if(format[i] == '%' && format[i + 1])
		{
			len += format_check(format[i + 1], args);
			i += 2;
		}
		ft_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	int	test;
	int t2;
	char c = 'c';

	test = ft_printf("\n Test %u T2 \n", -123);
	printf("\n%d\n", test);
	t2 = printf("\n Test %u T2 \n", -123);
	printf("\n%d\n", t2);
	return (test);
}
