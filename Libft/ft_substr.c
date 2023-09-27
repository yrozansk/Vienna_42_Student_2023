/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:49:26 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/27 17:30:35 by codespace        ###   ########.fr       */
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
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(len + 1);
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
	char			*res;
	
	res = ft_substr("hola", 4294967295, 0);
	printf("%s\n", res);
	return 0;
}*/