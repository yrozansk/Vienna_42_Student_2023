/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:10:04 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/24 14:12:14 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char 	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen((char *)s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		str = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (str)
			ft_strlcpy(str, (char *)&s1[front], rear - front + 1);
	}
	return (str);
}

int main(void)
{
	printf("%s\n", ft_strtrim("abcdefg" , "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return 0;
}