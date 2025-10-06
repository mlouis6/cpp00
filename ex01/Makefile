# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/24 17:56:19 by mlouis            #+#    #+#              #
#    Updated: 2025/10/06 21:24:36 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re fs debug

# DEPS = $(OBJ:.o=.d)
NAME = phonebook.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp contact.cpp phonebook.cpp
INCS = contact.hpp phonebook.hpp
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
