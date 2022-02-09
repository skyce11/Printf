/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:15:30 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/18 09:46:41 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_puthexupp(unsigned int c)
{
	char	*a;
	int		num;

	num = 0;
	a = "0123456789ABCDEF";
	if (c > 15)
	{
		num += ft_puthexupp(c / 16);
		c = c % 16;
	}
	if (c <= 15)
		num += ft_putchar(a[c]);
	return (num);
}

int	ft_puthexlow(unsigned int c)
{
	char	*a;
	int		num;

	num = 0;
	a = "0123456789abcdef";
	if (c > 15)
	{
		num += ft_puthexlow(c / 16);
		c = c % 16;
	}
	if (c <= 15)
		num += ft_putchar(a[c]);
	return (num);
}
