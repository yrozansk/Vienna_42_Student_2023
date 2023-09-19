/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:08:51 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/19 18:07:14 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *) str1;
	string2 = (unsigned char *) str2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (string1[i] != string2[i])
			return ((string1[i] - string2[i]));
		i++;
	}
	return (0);
}
/*
int main (void) 
{
	char str1[15] = "200";
	char str2[15] = "0";
	int ret;
	int result;

	ret = memcmp(str1, str2, 2);
	result = ft_memcmp(str1, str2, 2);

	if(ret > 0) {
		printf("memcmp str2 is less than str1\n");
	} else if(ret < 0) {
		printf("memcmp str1 is less than str2\n");
	} else {
		printf("memcmp str1 is equal to str2\n");
	}

	if(result > 0) {
		printf("ft_memcmp str2 is less than str1\n");
	} else if(result < 0) {
		printf("ft_memcmp str1 is less than str2\n");
	} else {
		printf("ft_memcmp str1 is equal to str2\n");
	}

	return(0);
}*/