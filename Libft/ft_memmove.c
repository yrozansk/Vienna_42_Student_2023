/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:12:05 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 19:35:52 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				z;
	int				i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *) dest;
	ptrsrc = (unsigned char *) src;
	z = n;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (ptrdest > ptrsrc)
	{
		z--;
		while (z >= 0)
		{
			(ptrdest[z]) = (ptrsrc[z]);
			z--;
		}
	}
	if (ptrdest < ptrsrc)
	{
		while (i < n)
		{
			(ptrdest[i]) = (ptrsrc[i]);
			i++;
		}
	}	
	return (dest);
}
/*
int	main (void) 
{
	const char src[50] = "https://www.tutorialspoint.com";
	char dest[50];

	printf("Before ft_memmove dest: %s\nsrc = %s\n", dest, src); 
	ft_memmove(dest, src, 3);
	printf("After ft_memmove dest: %s\nsrc = %s\n\n", dest, src);
	
	return(0);
}*/