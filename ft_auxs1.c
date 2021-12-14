/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxs1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:09:23 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/14 11:43:38 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_putper(char c)
{
	write(1, "%", 1);
	return (1);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if ( nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if ( nb < 10)
		ft_putchar (nb + 48);
	return (1);
}

int ft_putstr(char *str)
{
	int i;
	i = 1;
	while (str && str[++i])
		write(1, &str[i], 1);
	return (1);
}
