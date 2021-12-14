/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:15:30 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/14 11:57:13 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexupp (unsigned int c)
{
	char *a = "0123456789ABCDEF";

	if (c > 15)
	{
		ft_puthexupp( c / 16);
		c = c % 16;
	}
	if ( c <= 15)
		ft_putchar(a[c]);
	return (1);
}

int ft_puthexlow(unsigned int c)
{
	char *a = "0123456789abcdef";

	if (c > 15)
	{
		ft_puthexlow(c /16);
		c = c % 16;
	}
	if (c <= 15)
		ft_putchar(a[c]);
	return (1);
}


