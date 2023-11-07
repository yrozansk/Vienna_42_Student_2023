/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:16:38 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/07 16:04:27 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_character(char s, va_list args)
{
	int	printcount;

	printcount = 0;
	if (s == 'c')
		printcount += ft_putchar(va_arg(args, int));
	else if (s == 's')
		printcount += ft_print_string(va_arg(args, char *));
	else if (s == 'p')
	{
		printcount += ft_putchar('0');
		printcount += ft_putchar('x');
		ft_print_adress((unsigned long long)va_arg(args, void *), &printcount);
	}
	else if (s == 'd' || s == 'i')
		ft_print_int(va_arg(args, int), &printcount);
	else if (s == 'u')
		ft_print_unsignedint(va_arg(args, int), &printcount);
	else if (s == 'x')
		ft_print_hexadecimal_s(va_arg(args, int), &printcount);
	else if (s == 'X')
		ft_print_hexadecimal_b(va_arg(args, int), &printcount);
	else if (s == '%')
		printcount += ft_putchar('%');
	return (printcount);
}

int	ft_printf(const char *s, ...)
{
	unsigned int	printcount;
	int				i;
	va_list			args;

	printcount = 0;
	i = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			printcount += ft_character(s[i], args);
		}
		else
			printcount += ft_putchar(s[i]);
		i++;
	}
	va_end (args);
	return (printcount);
}
