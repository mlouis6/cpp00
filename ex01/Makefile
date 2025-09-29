# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/24 17:56:19 by mlouis            #+#    #+#              #
#    Updated: 2025/09/25 17:29:36 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re fs debug

# DEPS = $(OBJ:.o=.d)
NAME = phonebook.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp contact.cpp phonebook.cpp
INCS = contact.hpp phonebook.hpp
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


# ==============
# .PHONY = all clean fclean re fs debug

# NAME = philo
# CC = cc
# CFLAGS = -Wall -Wextra -Werror -pthread -g

# SRC_DIR = src/
# OBJ_DIR = .build/
# INC_DIR = inc/

# INCS = philo.h structs.h
# SRCS = main.c parsing.c philo.c table.c time.c actions.c print.c routine.c actions_utils.c checks.c

# INC = $(addprefix $(INC_DIR), $(INCS))
# SRC = $(addprefix $(SRC_DIR), $(SRCS))
# OBJ = $(addprefix $(OBJ_DIR), $(SRCS:%.c=%.o))

# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(CFLAGS) $(OBJ) -o $@

# $(OBJ_DIR)%.o: $(SRC_DIR)%.c
# 	mkdir -p $(@D)
# 	$(CC) $(CFLAGS) -I$(INC_DIR) -MMD -MP -c $< -o $@

# -include $(DEPS)

# clean:
# 	rm -rf $(OBJ_DIR)

# fclean:
# 	rm -rf $(OBJ_DIR)
# 	rm -rf $(NAME)

# re: fclean
# 	$(MAKE) all