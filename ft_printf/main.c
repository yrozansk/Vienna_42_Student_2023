/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:11 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/07 15:42:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int i;
	int n = 16;
	char *s = "armband";
	i = 0;
	ft_printf(NULL);
	printf("\nexpected: %i \n", printf		(" %p ", 16));
	printf("\nresult:   %i \n", ft_printf	(" %p ", 16));
	return(0);
}