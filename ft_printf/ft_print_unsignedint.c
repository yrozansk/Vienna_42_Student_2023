/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsignedint.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:16:57 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/07 14:21:06 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsignedint(unsigned int n, int *len)
{
	char	str;

	if (n == 4294967295)
	{
		ft_print_unsignedint(n / 10, len);
		*len += ft_putchar('5');
		return ;
	}
	if (n >= 10)
	{
		ft_print_unsignedint(n / 10, len);
		str = '0' + n % 10;
	}
	else
		str = '0' + n;
	*len += ft_putchar(str);
}
