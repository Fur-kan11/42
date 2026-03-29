# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mehozer <mehozer@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/04 00:26:40 by mehozer           #+#    #+#              #
#    Updated: 2026/03/17 06:16:01 by mehozer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a

SRCS        = ft_printf.c \
              ft_put.c \
              ft_putnbr.c \
              ft_putnbr_hex.c \
              ft_putptr.c \
              ft_putstr.c \
              ft_putuns.c \
              ft_putchar.c

OBJS        = $(SRCS:.c=.o)

HEADER      = ft_printf.h

CC          = cc
CFLAGS      = -Wall -Werror -Wextra
AR          = ar rcs
RM          = rm -f

all:        $(NAME)

$(NAME):    $(OBJS)
			$(AR) $(NAME) $(OBJS)

%.o:        %.c $(HEADER)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:     clean
			$(RM) $(NAME)

re:         fclean all

.PHONY:     all clean fclean re