/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:10:01 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 15:18:04 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*ptrstr;

	ptrstr = (char *) s;
	i = 0;
	if (n <= 0)
	{
		return (s);
	}
	if (n > 0)
	{
		while (i < n)
		{
			ptrstr[i] = ((char) 0);
			i++;
		}
	}
	return (s);
}
/*
int main (void) 
{
	char s[20] = "Hello World";
	char a[20] = "Hello World";
 
	printf("Before bzero str: %s\n", s); 
	bzero(s, 2);
	printf("After bzero str: %s\n", s); 

	printf("Before ft_bzero str: %s\n", a); 
	ft_bzero(a, 2);
	printf("After ft_bzero str: %s\n", a); 
	
	return(0);
}*/