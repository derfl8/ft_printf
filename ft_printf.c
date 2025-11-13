/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:25:00 by abegou            #+#    #+#             */
/*   Updated: 2025/11/13 12:40:20 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static char	conv_check(const char *conv)
{
	size_t	i;

	i = 0;
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
	if (conv[0] == '%' && (conv[1] == 'd' || conv[1] == 'i') && conv[2] == '\0')
		return(ft_putstr(print));
	(void)print;
	return (0);
}

int	main(void)
{
	int	test;

	test = ft_printf("%i", "-123");
	printf("\n%d\n", test);
	return (test);
}
