/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:53:30 by codespace         #+#    #+#             */
/*   Updated: 2023/11/10 18:09:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_adress(unsigned long int n, int *len)
{
	char	c;
	char	*hexa;

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
