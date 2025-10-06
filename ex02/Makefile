# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/01 16:18:02 by mlouis            #+#    #+#              #
#    Updated: 2025/10/06 18:21:00 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re fs debug

NAME = joyd.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = tests.cpp Account.cpp
INCS = Account.hpp
OBJS = $(SRCS: %.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
