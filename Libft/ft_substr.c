/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:49:26 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/21 18:38:01 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		c;
	char		*substring;

	c = 0;
	if (s == (void *)0 || start >= ft_strlen((char *)s))
	{
		return (ft_calloc(1, 1));
	}
	substring = malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	while (c != len && s[start] != '\0')
	{
		substring[c] = s[start];
		c++;
		start++;
	}
	return (substring);
}
/*
int main(void)
{
	char const		*s = "H";
	unsigned int	start = 2;	
	size_t			i = 3;
	char			*substring;

	substring = ft_substr(s, start, i);
	printf("%s\n", substring);
	return 0;
}*/