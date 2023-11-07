/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_s.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:18:20 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/07 15:39:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexadecimal_s(int m, int *len)
{
	char			c;
	char			*hexa;
	unsigned int	n;

	n = (unsigned int) m;
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
