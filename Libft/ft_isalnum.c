/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:51:39 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/06 14:45:59 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int	ft_isalnum(int c)
{
	if	((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
return (0);
}
/*
int	main(void)
{
	char c = '+';

	ft_isalnum(c);
	printf("isalnum is: %d\n", isalnum(c));
	printf("%d\n", ft_isalnum(c));
	return (0);
}*/