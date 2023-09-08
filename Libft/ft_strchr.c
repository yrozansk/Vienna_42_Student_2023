/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:19:33 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/08 16:23:54 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char)c == '\0')
	{
		return ((char *)str);
	}
	return (0);
}
/*
int	main(void)
{
	const char str[] = "Hello World";
	int character = 'a';
	char *result = ft_strchr(str, character);

	if (result)
		printf("Das Zeichen '%c' wurde gefunden an Position: %ld\n", character, result - str);
	else
		printf("Das Zeichen '%c' wurde nicht gefunden\n", character);
	return (0);
}*/
/*I need still learn how the code works*/
