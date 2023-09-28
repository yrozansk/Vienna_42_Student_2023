/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:40:40 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/28 17:11:26 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptrstr;

	ptrstr = (char *) str;
	i = 0;
	if (n <= 0)
	{
		return (str);
	}
	if (n > 0)
	{
		while (i < n)
		{
			ptrstr[i] = c;
			i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char buffer[20];
	int repeat_count = 10;
	ft_memset(buffer, 'A', repeat_count);
	printf("Buffer nach ft_memset: %s\n", buffer);
	return (0);
}
*/