/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:34:18 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/06 14:46:10 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
return (0);
}
/*
int	main(void)
{
	char c = 'a';

	ft_isalpha(c);
	printf("isalpha is: %d\n", isalpha(c));
	printf("%d\n", ft_isalpha(c));
	return (0);
}*/