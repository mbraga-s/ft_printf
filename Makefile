# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 18:15:12 by mbraga-s          #+#    #+#              #
#    Updated: 2022/11/28 15:50:00 by mbraga-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf ft_putchar ft_putstr ft_putnbr\
ft_putnbrhex ft_upperputnbrhex ft_unsputnbr ft_putptr\

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -fr

all: $(NAME)

$(NAME): $(SRCS:=.o)
		ar rc $(NAME) $(SRCS:=.o)

clean:
	$(RM)	$(SRCS:=.o)

fclean: clean
		$(RM)	$(NAME)

re:	fclean	$(NAME)

.PHONY: clean fclean re bonus