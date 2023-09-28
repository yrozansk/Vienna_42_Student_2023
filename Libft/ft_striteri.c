/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:33:18 by codespace         #+#    #+#             */
/*   Updated: 2023/09/28 17:10:30 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*str;
	unsigned int	counter;

	str = (char *)s;
	if (str && f)
	{
		counter = 0;
		while (str[counter])
		{
			(*f)(counter, &str[counter]);
			counter++;
		}
	}
}
/*
void	print_char_index(unsigned int index, char *c)
{
	printf("Character at index %d is: %c\n", index, *c);
}

int	main(void)
{
	char input_string[] = "Hello, World!";
	ft_striteri(input_string, &print_char_index);
	return (0);
}*/