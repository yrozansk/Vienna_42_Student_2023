/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:10:30 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/19 15:41:12 by yrozansk         ###   ########.fr       */
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
	while (i != n)
	{
		if (ptrstr[i] == ((unsigned char)c))
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
	char str[] = "Hello.";
	char ch = '6';
	char str1[] = "Hello.";
	char ch1 = '6';
	int	tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	char *ret;
	char *result1;

	ret = memchr(str, ch, ft_strlen(str));
	result1 = ft_memchr(str1, ch1, ft_strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("String after |%c| is - |%s|\n", ch1, result1);
	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	
	return(0);
}*/