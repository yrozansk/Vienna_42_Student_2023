/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:23:23 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/25 09:50:44 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	get_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_str(char *str, int n, size_t len)
{
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		len--;
	}
	while (len > 0)
	{
		if (n < 0)
		{
			str[len] = '0' - (n % 10);
			n = n / 10;
		}
		else
		{
			str[len - 1] = '0' + (n % 10);
			n = n / 10;
		}
		len--;
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*result;

	len = get_len(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	fill_str(result, n, len);
	return (result);
}
/*
int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(987654321));
	printf("%s\n", ft_itoa(-123456789));
}*/