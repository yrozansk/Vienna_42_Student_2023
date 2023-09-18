/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:23:31 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 14:53:59 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	if ((char)c == *str)
	{
		return ((char *)str);
	}
	return (0);
}
/*
int	main(void)
{
	const char str[] = "Hello World";
	const char str1[] = "Hello World";	
	int character = 'A';
	char *result = strrchr(str, character);
	char *result1 = ft_strrchr(str1, character);

	if (result)
		printf("Das Zeichen '%c' wurde gefunden an Position: 
		%ld\n", character, result - str);
	else
		printf("Das Zeichen '%c' wurde nicht gefunden\n", character);
	
	if (result1)
		printf("Das Zeichen '%c' wurde gefunden an Position: 
		%ld\n", character, result1 - str1);
	else
		printf("Das Zeichen '%c' wurde nicht gefunden\n", character);
	return(0);
}*/