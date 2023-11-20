/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:14:48 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/14 14:55:47 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stddef.h>

# include <stdio.h>
# include <unistd.h>
# include <malloc.h>
# include <fcntl.h>
# define BUFFER_SIZE 42

char	*get_next_line(int fd);

#endif