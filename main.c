/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:41:53 by abegou            #+#    #+#             */
/*   Updated: 2025/11/17 18:42:03 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int a = 42;
    char  c;
    int  i;
    unsigned int u;
    char str[] = "2 ";
    unsigned int x = 324554;
    char string = NULL;

    c = 'c';
    i = 0;
    u = 45456;


    printf("Le vrai -> %d\n", 2147483647);
    ft_printf("Le mien -> %d\n", 2147483647);
    printf("\n");
    printf("Le vrai -> %i\n", 456);
    ft_printf("Le mien -> %i\n", 456);
    printf("\n");
    printf("%d\n", printf("Le vrai -> %u\n", 42));
    ft_printf("%d\n", ft_printf("Le mien -> %u\n", 42));
    printf("\n");
    printf("Le vrai -> %s\n", "test");
    ft_printf("Le mien -> %s\n", "test");
    printf("\n");
    printf("Le vrai -> %c\n", 'c');
    ft_printf("Le mien -> %c\n", 'c');
    printf("\n");
    printf("Le vrai -> %x\n", 16);
    ft_printf("Le mien -> %x\n", 16);
    printf("\n");
    printf("Le vrai -> %X\n", 16);
    ft_printf("Le mien -> %X\n", 16);
    printf("\n");
    printf("Le vrai -> %p\n", (void)&a);
    ft_printf("Le mien -> %p\n", (void)&a);
    printf("\n");
    printf("Le vrai -> %%\n");
    ft_printf("Le mien -> %%\n");
    printf("\n");
    printf("Le vrai -> %d\n", printf(NULL));
    ft_printf("Le mien -> %d\n", ft_printf(NULL));


    printf("**TEST 1**\n");
    int lp = ft_printf("\n %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
    ft_printf("\n%d\n", lp);
    printf("\n%d\n", lp);
    printf("**TEST 2**\n");
     int st = ft_printf("\nPhexa:%X phexa:%x char:%c int:%d str:%s %% unsigned:%u\n", x, x, c, i, str, u);
    int ko = printf("\nPhexa:%X phexa:%x char:%c int:%d str:%s %% unsigned:%u\n", x, x, c, i, str, u);
    ft_printf("\n%d\n%d\n", st, ko);
    printf("\n%d\n%d\n", st, ko);
    printf("**TEST 3**\n");
    ft_printf(" NULL %s NULL", string);
    printf(" NULL %s NULL ", string);
    printf("**TEST 4***\n");
    ft_printf("\n%p\n", &x);
    printf("\n%p\n", &x);

}
