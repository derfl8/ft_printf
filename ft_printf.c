/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:25:00 by abegou            #+#    #+#             */
/*   Updated: 2025/11/14 11:57:40 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static char	conv_check(const char *conv)
{
	while(*conv != '%')
		*conv++;
	*conv++;
	if (*conv == 'c' || *conv == 's' || *conv == 'p' || *conv == 'd' 
			|| *conv == 'i' || *conv == 'u' || *conv == 'x' || *conv == 'X' 
			|| *conv == '%')
		return (*conv);
	else
		return (NULL);
}

int	ft_printf(const char *conv, char *print)
{
	char	check;

	check = conv_check(conv);
	if (!check)
		return (NULL);
	if (check  == '%')
		return (ft_putchar(check));
	if (check == 's')
		return(ft_putstr(print));
	if (check == 'c')
	{
		if (ft_strlen(print) == 1)
			return (ft_putchar((const char)print[0]));
		else
			return (NULL);
	}
	if (check == 'd')
		return (ft_putstr(ft_itoa(print)));
	if (check == 'i')
	{
		if(print >= 0)
			return (ft_putstr(ft_itoa(print)));
		else
			return (NULL);
	}
	(void)print;
	return (0);
}

int	main(void)
{
	int	test;

	test = ft_printf("\nsdfsdfsd%diiii", "qwe");
	printf("\n%d\n", test);
	return (test);
}
