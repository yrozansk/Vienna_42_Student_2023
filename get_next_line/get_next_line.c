/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:10:10 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/20 14:49:37 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
char	*get_next_line(int fd)
{
	static int	lesezeichen;
	static char	*buffer;
	char		*line;

	if (!fd)
	{
		return (NULL);
	}
	buffer = read_file(fd);
	if (!buffer)
	{
		return (NULL);
	}
	line = ft_line(buffer);
	return(line);
}
*/


int	main(void)
{
	int fd = open("./TESTÜBUNG.txt", O_RDWR | O_CREAT);
	write(fd, "Hey", 4);
//	printf("%s", get_next_line(fd));
	return (0);
}