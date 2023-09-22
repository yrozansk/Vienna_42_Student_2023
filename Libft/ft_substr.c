/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:49:26 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/22 12:19:13 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
	{
		return (0);
	}
	if (ft_strlen((char *)s) < (int)start)
		len = 0;
	if (ft_strlen((char *)s + start) < (int)len)
		len = ft_strlen((char *)s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, (char *)s + start, len + 1);
	return (ret);
}
/*
int main(void)
{
	char const		*s = "Hallo";
	unsigned int	start = 3;	
	size_t			i = 3;
	char			*substring;

	substring = ft_substr(s, start, i);
	printf("%s\n", substring);
	return 0;
}*/