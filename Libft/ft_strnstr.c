/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:16:49 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/20 16:03:21 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	c = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (c < len && big[c])
	{
		i = 0;
		while (c < len && little[i] && big[c] && little[i] == big[c])
		{
			i++;
			c++;
		}
		if (little[i] == '\0')
			return ((char *)&big[c - i]);
		c = c - i + 1;
	}
	return (0);
}
/*
int	main(void)
{
	const char *big = "Foo Bar Baz";
	const char *little = "Bar";
	char *result1;
	char *result2;

	result1 = strnstr(big, little, 5);
	result2 = ft_strnstr(big, little, 5);
	printf("%s\n", result1);
	printf("%s\n", result2);
	return (0);
}*/
// Not Ready (PS: cc with "-lbsd" Flag &
// use "#include<bsd/string.h>". Do the same with "strnstr" )