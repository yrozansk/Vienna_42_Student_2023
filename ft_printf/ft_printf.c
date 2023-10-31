/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:16:38 by yrozansk          #+#    #+#             */
/*   Updated: 2023/10/31 15:23:15 by yrozansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_putchar(int s)
{	
	write(1, &s, 1);
	return(1);
}

int ft_print_string(char *s)
{
	int i;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	return(i);
}

void	ft_print_adress(unsigned long long int m, int *len)
{
	char	c;
	char	*Hexa;
	unsigned long int n;

	n = (unsigned long long int) m;
	Hexa = "0123456789abcdef";
	if (n > 16)
	{
		ft_print_adress(n / 16, len);
		ft_print_adress(n % 16, len);
	}
	else
	{
		c = Hexa[n];
		*len += ft_putchar(c);
	}
}

void	ft_print_int(int n, int *len)
{
	char	str;

	if (n == -2147483648)
	{
		ft_print_int(n / 10, len);
		*len += ft_putchar('8');
		return;
	}
	else if (n < 0)
	{
		*len += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_print_int(n / 10, len);
		str = '0' + n % 10;
	}
	else
		str = '0' + n;
	*len += ft_putchar(str);
}

void	ft_print_unsignedint(unsigned int n, int *len)
{
	char	str;

	if (n == 4294967295)
	{
		ft_print_unsignedint(n / 10, len);
		*len += ft_putchar('5');
		return;
	}
	if (n >= 10)
	{
		ft_print_unsignedint(n / 10, len);
		str = '0' + n % 10;
	}
	else
		str = '0' + n;
	*len += ft_putchar(str);
}

void	ft_print_hexadecimal_S(int m, int *len)
{
	char	c;
	char	*Hexa;
	unsigned int n;

	n = (unsigned int) m;
	Hexa = "0123456789abcdef";
	if (n > 16)
	{
		ft_print_hexadecimal_S(n / 16, len);
		ft_print_hexadecimal_S(n % 16, len);
	}
	else
	{
		c = Hexa[n];
		*len += ft_putchar(c);
	}
}

void	ft_print_hexadecimal_B(int m, int *len)
{
	char	c;
	char	*Hexa;
	unsigned int n;

	n = (unsigned int) m;
	Hexa = "0123456789ABCDEF";
	if (n > 16)
	{
		ft_print_hexadecimal_B(n / 16, len);
		ft_print_hexadecimal_B(n % 16, len);
	}
	else
	{
		c = Hexa[n];
		*len += ft_putchar(c);
	}
}

int	ft_character(char s, va_list args)
{
	int	printcount;
	if (s == 'c')
		printcount += ft_putchar(va_arg(args, int));
	else if (s == 's')
		printcount += ft_print_string(va_arg(args, char *));
	else if (s == 'p')
	{
		printcount += ft_putchar('0');
		printcount += ft_putchar('x');
		ft_print_adress((unsigned long long)va_arg(args, void *), &printcount);
	}
	else if (s == 'd' || s == 'i')
		ft_print_int(va_arg(args, int), &printcount);
	else if (s == 'u')
		ft_print_unsignedint(va_arg(args, int), &printcount);
	else if (s == 'x')
		ft_print_hexadecimal_S(va_arg(args, int), &printcount);
	else if (s == 'X')
		ft_print_hexadecimal_B(va_arg(args, int), &printcount);	
	else if (s == '%')
		printcount += ft_putchar('%');
	
	return(printcount);
}

int ft_printf(const char *s, ...)
{
	unsigned int printcount = 0;
	int i = 0;
	va_list args;

	if (!s)
		return (-1);
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			printcount += ft_character(s[i], args);
		}
		else
			printcount += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return(printcount);
}
/*
int main()
{
	int i;
	int n = 1000;
	char *s = "armband";
	char c = 50;
	i = 0;
	ft_printf(NULL);
	printf("\nexpected: %i \n", printf		("expected: Hello World das %s ist %p ein test mit hex ", s));
	printf("\nresult:   %i \n", ft_printf	("result:   Hello World das %s ist %p ein test mit hex ", s));
	return(0);
}
*/