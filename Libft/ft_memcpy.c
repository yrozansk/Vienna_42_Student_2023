/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:17:17 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 14:57:16 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main (void) 
{
	const char src[50] = "https://www.tutorialspoint.com";
	char dest[50];

	printf("before ft_memcpy is: %s\n", dest);
	ft_memcpy(dest, src, 30);
	printf("after ft_memcpy is: %s\n", dest);

	return(0);
}*/