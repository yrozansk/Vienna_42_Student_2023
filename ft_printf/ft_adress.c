/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:05:08 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/10 16:52:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_adress(unsigned long int m, int *len)
{
	unsigned long int	n;

	n = (unsigned long int) m;
	if (n == 0)
	{
		*len += ft_print_string("(nil)");
	}
	else
	{
		*len += ft_print_string("0x");
		ft_print_hexadecimal_s(n, len);
	}
}
