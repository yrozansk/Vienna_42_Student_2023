/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_s.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:18:20 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/10 18:09:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexadecimal_s(unsigned long int n, int *len)
{
	char	c;
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		ft_print_hexadecimal_s(n / 16, len);
		ft_print_hexadecimal_s(n % 16, len);
	}
	else
	{
		c = hexa[n];
		*len += ft_putchar(c);
	}
}
