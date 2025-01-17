#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tday <tday@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 23:53:37 by tday              #+#    #+#              #
#    Updated: 2025/01/18 00:09:16 by tday             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables
NAME			= hi
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
SRC				= main.cpp
OBJ				= $(SRC:.cpp=.o)
RM				= rm -f

# Colours
RESET  = \033[0m
GRAY            = \033[1;30m
RED             = \033[1;31m
GREEN           = \033[1;32m
YELLOW          = \033[1;33m
BLUE            = \033[1;34m
MAGENTA         = \033[1;35m
CYAN            = \033[1;36m
WHITE           = \033[1;37m

# Recipes
all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "$(CYAN)Everything compiled and linked into executable: $(WHITE)$(NAME)$(RESET)"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(GREEN)$< compiled successfully!$(DEFAULT_COLOUR)"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Deleted executable: $(WHITE)$(NAME)$(RESET)"

re: fclean all

.PHONY: all clean fclean re