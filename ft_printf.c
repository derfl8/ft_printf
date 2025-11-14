/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:25:00 by abegou            #+#    #+#             */
/*   Updated: 2025/11/14 14:01:07 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static char	format_check(const char *format)
{
	while (*format != '%')
		format++;
	format++;
	if (*format == 'c' || *format == 's' || *format == 'p' || *format == 'd'
		|| *format == 'i' || *format == 'u' || *format == 'x' || *format == 'X'
		|| *format == '%')
		return (*format);
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	char	check;
	va_list	args;
	int		len;

	va_start(args, format);
	check = format_check(format);
	len = 0;
	if (!check)
		return (0);
	if (check == '%')
		len = ft_putchar(check);
	if (check == 's')
		len = ft_putstr(va_arg(args, char *));
	if (check == 'c')
	{
		if (ft_strlen(va_arg(args, char *)) == 1)
			len = ft_putchar(*va_arg(args, char *));
		else
			return (0);
	}
	if (check == 'd')
		len = ft_putstr(ft_itoa(va_arg(args, int)));
	if (check == 'i')
	{
		if (va_arg(args, int) >= 0)
			len = ft_putstr(ft_itoa(va_arg(args, int)));
		else
			return (0);
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	int	test;

	test = ft_printf("\nsdfsdfsd%iii", 1);
	printf("\n%d\n", test);
	return (test);
}
