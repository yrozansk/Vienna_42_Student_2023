/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:13:13 by yrozansk          #+#    #+#             */
/*   Updated: 2023/09/20 17:22:39 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char		*new;
	size_t		s_len;
	int			i;

	i = -1;
	s_len = strlen(s);
	new = malloc((s_len + 1) * sizeof(char));
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}
/*
int main()
{
	char *s = "Hello";	
	char *new = strdup(s);
	char *new2 = ft_strdup(s);
	
	printf("%s\n", new);
	free(new);
	printf("%s\n", new2);
	free(new2);
	return(0);
}*/