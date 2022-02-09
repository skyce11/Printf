/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:58:29 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/21 14:02:19 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_distribution(char c, va_list arg)
{
	int	sum;

	sum = 0;
	if (c == 'c')
		sum += ft_putchar (va_arg (arg, int));
	if (c == 's')
		sum += ft_putstr (va_arg (arg, char *));
	if (c == 'i' || c == 'd')
		sum += ft_putnbr (va_arg (arg, int));
	if (c == '%')
		sum += ft_putchar('%');
	if (c == 'x')
		sum += ft_puthexlow (va_arg (arg, unsigned int));
	if (c == 'X')
		sum += ft_puthexupp (va_arg (arg, unsigned int));
	if (c == 'u')
		sum += ft_putunbr (va_arg (arg, unsigned int));
	if (c == 'p')
	{
		ft_putstr("0x");
		sum += ft_putnbr_base(va_arg(arg, unsigned long), "0123456789abcdef");
		sum += 2;
	}	
	return (sum);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		sum;
	int		i;

	i = 0;
	sum = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			sum += ft_distribution(str[i], arg);
		}
		else
		{
			sum += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(arg);
	return (sum);
}
