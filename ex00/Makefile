# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/26 22:17:30 by apaula-l          #+#    #+#              #
#    Updated: 2025/06/26 22:22:53 by apaula-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC_DIR = ./src
OBJ_DIR = ./build

SRC = $(SRC_DIR)/main.cpp \
      $(SRC_DIR)/Zombie.cpp \
      $(SRC_DIR)/newZombie.cpp \
      $(SRC_DIR)/randomChump.cpp

OBJS = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CC = c++
C++FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(C++FLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(C++FLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
