/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:24:53 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/08 14:15:31 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
    char c = '\n';

    ft_isprint(c);
    printf("isprint is: %d\n", isprint(c));
    printf("%d\n", ft_isprint(c));
    return (0);
}*/
