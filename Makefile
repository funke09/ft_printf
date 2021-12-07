# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 18:23:40 by zcherrad          #+#    #+#              #
#    Updated: 2021/12/07 21:41:13 by zcherrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
SRCS =ft_printf.c\
ft_putchar.c\
ft_puthexm.c\
ft_puthexupper.c\
ft_putnbr.c\
ft_putpointer.c\
ft_putstr.c\
ft_putunsg.c\


OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f
AR = ar rc

all: $(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean:clean
	$(RM) $(NAME)