/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:11 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/07 16:05:30 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int i;
	int n = 1000;
	char *s = "armband";
	i = 0;
	ft_printf(NULL);
	printf("\nexpected: %i \n", printf		("expected: %s ist %x test mit hex ", s, n));
	printf("\nresult:   %i \n", ft_printf	("result:   %s ist %x test mit hex ", s, n));
	return(0);
}