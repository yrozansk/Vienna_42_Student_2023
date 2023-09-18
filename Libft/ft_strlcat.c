/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:57:37 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 15:55:06 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && i + dst_len + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char *dst = "Hello";
	char *src = "Helloliuagf";

	int result1 = strlcat(dst, src, 5);
	int	result2	= ft_strlcat(dst, src, 5);
	printf("%i\n", result1);
	printf("%i\n", result2);
	return (0);
}
*/
// Not Ready (PS: cc with "-lbsd" Flag &
// use "#include<bsd/string.h>". Do the same with "strnstr" )