/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:20:35 by migonzal          #+#    #+#             */
/*   Updated: 2021/12/15 12:12:53 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


int ft_printf(const char *str, ...);
int	ft_putper(char c);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int ft_putunbr(unsigned int nb);
int ft_puthexupp(unsigned int c);
int	ft_puthexlow(unsigned int c);


#endif
