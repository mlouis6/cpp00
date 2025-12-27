# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/01 16:18:02 by mlouis            #+#    #+#              #
#    Updated: 2025/12/27 14:36:19 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re

NAME = joyd.out
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = tests.cpp Account.cpp
INCS = Account.hpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
