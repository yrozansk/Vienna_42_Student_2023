/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:54:44 by yrozansk          #+#    #+#             */
/*   Updated: 2023/11/07 16:07:39 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(int s);
int		ft_print_string(char *s);
void	ft_print_adress(unsigned long long int m, int *len);
void	ft_print_int(int n, int *len);
void	ft_print_unsignedint(unsigned int n, int *len);
void	ft_print_hexadecimal_s(int m, int *len);
void	ft_print_hexadecimal_b(int m, int *len);

#endif