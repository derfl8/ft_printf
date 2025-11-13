/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:08:44 by abegou            #+#    #+#             */
/*   Updated: 2025/11/12 10:15:44 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

// libs
# include <stdlib.h>
# include <unistd.h>

// custom functions
int		ft_printf(const char *conv, char *print);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
//int		*ft_itoa(int n);

#endif
