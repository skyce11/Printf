/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:58:29 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/07 12:53:12 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str && str[++i])
		write(1, &str[i], 1);
}


void ft_putchar (char c)
{

	write(1, &c, 1);
}

void ft_distribution (const char *str, va_list arg)
{
	//int sum;
	if (*str ==  'c')
		ft_putchar (va_arg(arg, int));
	if (*str == 's')
		ft_putstr(va_arg(arg, char*));
}






int ft_printf(const char *str, ...)
{
	va_list arg;
	int sum;

	va_start(arg, str);
	i = 0;

	while (*str)
	{
		if (*str =='%')
		{
			sum += ft_distribution(str, &arg);
		}
		else
		{
			write(1, *str, 1);
		}
	}
	va_end(arg);
	return (0); 
}


int main()
{
	char *a = "holaquepacha";
	const char *prueba = "%s";
	ft_printf(prueba, a);
	return (0);
}
