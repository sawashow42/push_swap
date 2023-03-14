# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 21:04:04 by shsawaki          #+#    #+#              #
#    Updated: 2022/10/27 23:32:28 by shsawaki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
# CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = $(shell find . type f -name \*.c)
HDRS = $(shell find . type f -name \*.h)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS):	$(HDRS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY : all clean fclean re


