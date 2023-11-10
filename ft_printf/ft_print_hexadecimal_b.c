/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:19:38 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/10 18:09:08 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexadecimal_b(unsigned long int n, int *len)
{
	char			c;
	char			*hexa;

	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_print_hexadecimal_b(n / 16, len);
		ft_print_hexadecimal_b(n % 16, len);
	}
	else
	{
		c = hexa[n];
		*len += ft_putchar(c);
	}
}
