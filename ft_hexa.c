/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:15:30 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/16 10:19:12 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexupp (unsigned int c)
{
	char *a = "0123456789ABCDEF";
	int		num;

	num = 0;
	if (c > 15)
	{
		num += ft_puthexupp( c / 16);
		c = c % 16;
	}
	if ( c <= 15)
		num += ft_putchar(a[c]);
	return (num);
}

int ft_puthexlow(unsigned int c)
{
	char *a = "0123456789abcdef";
	int		num;

	num = 0;

	if (c > 15)
	{
		num += ft_puthexlow(c /16);
		c = c % 16;
	}
	if (c <= 15)
		num += ft_putchar(a[c]);
	return (num);
}
/*
int ft_putphex(void *c)
{
	char *a = "0123456789abcdef";
	int num;

	num = 0;
	num += ft_putstr("0x");


	
}*/


