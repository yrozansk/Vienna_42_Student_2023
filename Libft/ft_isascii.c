/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:03:35 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/06 14:50:41 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
return (0);
}
/*
int	main(void)
{
	int c = 128;

	printf("isascii is: %d\n", isascii(c));
	printf("%d\n", ft_isascii(c));
	return (0);
}*/