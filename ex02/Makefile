# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/01 16:18:02 by mlouis            #+#    #+#              #
#    Updated: 2025/11/07 14:27:18 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re

NAME = joyd.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = tests.cpp Account.cpp
INCS = Account.hpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
