/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:58:29 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/09 11:51:08 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

int ft_putper(char c)
{
	write(1, "%", 1);
	return (1);
}
int ft_putchar (char c)
{
	write(1, &c, 1);
	return (1);
}


int	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;

	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	return (1);
}

int ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str && str[++i])
		write(1, &str[i], 1);
	return (1);
}


int ft_distribution (char c, va_list arg)
{
	int sum;
	if (c ==  'c' || c == '%')
		sum = ft_putchar (va_arg(arg, int));
	if (c == 's')
		sum = ft_putstr(va_arg(arg, char*));
	if (c == 'i')
		sum = ft_putnbr(va_arg(arg, int));
	if (c ==  '%')
		sum = 	ft_putper(va_arg(arg, int));
	return (sum);

}






int ft_printf(const char *str, ...)
{
	va_list arg;
	int sum;
	int i;

	i = 0;
	va_start(arg, str);

	while (str[i])
	{
		if (str[i] =='%')
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
	return (0); 
}


int main()
{
	char a = '%';
	const char *prueba = "%%";
	ft_printf(prueba, a);
	return (0);
}
