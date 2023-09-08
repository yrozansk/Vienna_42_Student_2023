/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:37:58 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/08 14:03:15 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(char a)
{
	if (a >= 65 && a <= 90)
	{
		a += 32;
		return (a);
	}
	return (a);
}
/*
int	main(void)
{
	char	c = 'a';

	printf("tolower is %c\n", tolower(c));
	printf("%c\n", ft_tolower(c));
	return(0);
}*/