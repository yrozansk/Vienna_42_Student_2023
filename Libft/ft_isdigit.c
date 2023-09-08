/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:42:30 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/06 14:45:21 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
return (0);
}
/*
int	main(void)
{
	char c = '5';

	ft_isdigit(c);
	printf("isdigit is: %d\n", isdigit(c));
	printf("%d\n", ft_isdigit(c));
	return (0);
}*/