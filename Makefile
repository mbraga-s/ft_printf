# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 18:15:12 by mbraga-s          #+#    #+#              #
#    Updated: 2023/02/28 10:34:38 by mbraga-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf ft_numbers ft_strings

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

.PHONY: clean fclean re