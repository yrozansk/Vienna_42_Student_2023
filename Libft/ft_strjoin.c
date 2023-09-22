/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:48:17 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/22 16:06:55 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_len(char s1, char s2)
{
	int	s1_len;
	int	s2_len;
	int	result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = s1_len + s2_len;
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		i;
	int		c;

	ret = malloc((ft_len((char *)s1, (char *)s2) + 1) * sizeof(char));
	i = 0;
	c = 0;
	while (*s1 || *s2)
	{
		while (s1[i] != '\0')
		{
			ret[i] = s1[i];
			i++;
		}
		while (s2[c] != '\0')
		{
			ret[i] = s2[c];
			i++;
			c++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}

int	main(void)
{
	const char	*String1 = "Hello";
	const char	*String2 = "World";
	char		*Connect;

	Connect = ft_strjoin(String1, String2);
	printf("%s\n", Connect);
	return(0);
}