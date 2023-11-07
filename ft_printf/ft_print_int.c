/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:14:53 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/07 14:21:09 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(int n, int *len)
{
	char	str;

	if (n == -2147483648)
	{
		ft_print_int(n / 10, len);
		*len += ft_putchar('8');
		return ;
	}
	else if (n < 0)
	{
		*len += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_print_int(n / 10, len);
		str = '0' + n % 10;
	}
	else
		str = '0' + n;
	*len += ft_putchar(str);
}
