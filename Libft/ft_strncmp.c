/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:47:32 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/14 18:11:28 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "Hello Aolr2";
	char s2[] = "Hello Aolr1";

	printf("strncmp is: %d\n", strncmp(s1, s2, 11));
	printf("%d\n", ft_strncmp(s1, s2, 11));
	return (0);
}*/