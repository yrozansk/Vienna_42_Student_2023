# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrozansk <yrozansk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 10:58:14 by codespace         #+#    #+#              #
#    Updated: 2023/11/07 14:56:35 by yrozansk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_print_string.c ft_print_adress.c ft_print_int.c ft_print_unsignedint.c ft_print_hexadecimal_s.c ft_print_hexadecimal_b.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

.PHONY: all clean fclean re bonus

all: $(NAME)

clean: 
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)