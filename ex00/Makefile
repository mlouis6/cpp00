# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/24 17:14:54 by mlouis            #+#    #+#              #
#    Updated: 2025/12/27 14:36:19 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re

NAME = megaphone.out
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
