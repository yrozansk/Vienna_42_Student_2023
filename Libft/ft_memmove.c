/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:12:05 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 21:14:39 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_destbig(unsigned char *ptrdest, unsigned char *ptrsrc, size_t n)
{
	int	z;

	z = n;
	z--;
	while (z >= 0)
	{
		(ptrdest[z]) = (ptrsrc[z]);
		z--;
	}
	return (*ptrdest);
}

int	ft_destsmall(unsigned char *ptrdest, unsigned char *ptrsrc, size_t n)
{
	unsigned long int	i;

	i = 0;
	while (i < n)
	{
		(ptrdest[i]) = (ptrsrc[i]);
		i++;
	}
	return (*ptrdest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *) dest;
	ptrsrc = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (ptrdest > ptrsrc)
	{
		ft_destbig(ptrdest, ptrsrc, n);
	}
	if (ptrdest < ptrsrc)
	{
		ft_destsmall(ptrdest, ptrsrc, n);
	}
	return (dest);
}
/*
int	main (void) 
{
	char src[100] = "I bins der Weinachtsmann - memmove";
	memmove(src + 13, src + 10, 5);
	printf("%s\n", src);

	char lll[100] = "I bins der Weinachtsmann - ft_memmove";
	ft_memmove(lll + 13, lll + 10, 5);
	printf("%s\n", lll);
}*/
