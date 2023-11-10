/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:11 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/10 16:20:33 by codespace        ###   ########.fr       */
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
	printf("\nexpected: %i \n", printf		(" %p ", 1500));
	printf("\nresult:   %i \n", ft_printf	(" %p ", 1500));
	return(0);
}