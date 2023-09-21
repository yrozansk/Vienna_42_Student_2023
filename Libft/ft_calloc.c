/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:59:51 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/21 14:15:12 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*str;
	unsigned char	*ptrstr;
	
	if ((unsigned long long) nmemb * size > 18446744073709551615ULL)
		return (malloc(0));
	if (nmemb == 0)	
		return (malloc(0));
	str = malloc (nmemb * size);
	if (str == NULL)
		return (NULL);
	ptrstr = (unsigned char *)str;
	ft_bzero(ptrstr, nmemb * size);
	return (ptrstr);
}
/*
int main () {
	int i, n;
	int *a;

	printf("Number of elements to be entered:");
	scanf("%d",&n);

	a = (int*)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n",n);
	for( i=0 ; i < n ; i++ ) {
		scanf("%d",&a[i]);
	}

	printf("The numbers entered are: ");
	for( i=0 ; i < n ; i++ ) {
		printf("%d ",a[i]);
	}
	free(a);

	return(0);
}*/