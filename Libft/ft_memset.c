/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:40:40 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/18 14:58:26 by yrozansk         ###   ########.fr       */
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
