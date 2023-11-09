/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:05:08 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/09 13:31:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_adress(unsigned long long int m, int *len)
{
	char				c;
	char				*hexa;
	unsigned long int	n;

	n = (unsigned long long int) m;
	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		ft_print_adress(n / 16, len);
		ft_print_adress(n % 16, len);
	}
	else
	{
		c = hexa[n];
		*len += ft_putchar(c);
	}
}
