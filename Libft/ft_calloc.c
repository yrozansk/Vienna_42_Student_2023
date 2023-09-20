/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:59:51 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/20 17:58:58 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, n;
	int *a;

	printf("Number of elements to be entered:");
	scanf("%d",&n);

	a = (int*)calloc(n, sizeof(int));
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
}
