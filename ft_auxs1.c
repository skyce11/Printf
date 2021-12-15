/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxs1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:09:23 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/15 12:20:03 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
int ft_putper(char c)
{
	write(1, '%', 1);
	return (1);
}
*/
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putnbr(int nb)
{
	int count;

	count =  0;
	if (nb < 0)
	{
		count += ft_putchar ('-');
		nb = -nb;
	}
	if ( nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if ( nb < 10)
	{
		count += ft_putchar (nb + 48);
	}
	return (count);
}

int ft_putstr(char *str)
{
	int i;

	if (!str)
		return (write(1, "(null)", 6));
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}

int ft_putunbr(unsigned int nb)
{
	int count;

	count = 0;

	if (nb < 0)
		nb = -nb;
	if (nb >= 10)
	{
		count += ft_putunbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		count += ft_putchar ( nb + 48);
	return (count);
}
