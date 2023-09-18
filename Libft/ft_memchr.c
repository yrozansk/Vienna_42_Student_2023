/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:10:30 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 14:57:00 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptrstr;

	ptrstr = (unsigned char *) str;
	i = 0;
	while (i != ++n)
	{
		if (ptrstr[i] == c)
		{
			return (&ptrstr[i]);
		}
		i++;
	}
	return ((NULL));
}
/*
int main () 
{
	const char str[] = "Hello. I want to eat.";
	const char ch = '.';
	const char str1[] = "Hello. I want to eat.";
	const char ch1 = '.';
	char *ret;
	char *result;

	ret = memchr(str, ch, ft_strlen(str));
	result = ft_memchr(str1, ch1, ft_strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("String after |%c| is - |%s|\n", ch1, result);

	return(0);
}*/