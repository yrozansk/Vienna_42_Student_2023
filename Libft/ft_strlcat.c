/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:57:37 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:11 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen((char *)src);

    if (size <= dst_len)
        return size + src_len;

    size_t space_left = size - dst_len - 1; // Reserve Platz für das Nullzeichen

    size_t i = 0;
    while (src[i] && i < space_left) {
        dst[dst_len + i] = src[i];
        i++;
    }

    dst[dst_len + i] = '\0'; // Nullterminierung hinzufügen

    return (dst_len + src_len);
}

int	main(void)
{
	char *dst = "Hell";
	char *src = "Helloliuagf";

	int result1 = strlcat(dst, src, 5);
	int	result2	= ft_strlcat(dst, src, 5);
	printf("%i\n", result1);
	printf("%i\n", result2);
	return (0);
}
// Not Ready (PS: cc with "-lbsd" Flag & use "#include<bsd/string.h>". Do the same with "strnstr" )