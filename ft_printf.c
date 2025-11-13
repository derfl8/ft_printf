/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:25:00 by abegou            #+#    #+#             */
/*   Updated: 2025/11/13 11:52:38 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_printf(const char *conv, char *print)
{
	if (conv[0] == '%' && conv[1] == '%' && conv[2] == '\0')
		return (ft_putchar(conv[1]));
	if (conv[0] == '%' && (conv[1] == 'd' || conv[1] == 'i') && conv[2] == '\0')
		return(ft_putstr(print));
	(void)print;
	return (0);
}

int	main(void)
{
	int	test;

	test = ft_printf("%%", "123");
	printf("\n%d\n", test);
	return (test);
}
