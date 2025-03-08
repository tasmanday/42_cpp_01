#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tday <tday@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 22:26:35 by tday              #+#    #+#              #
#    Updated: 2025/03/08 22:31:29 by tday             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Variables
NAME            = unnecessary_violence
CXX             = c++
CXXFLAGS        = -Wall -Wextra -Werror -std=c++98
SRC_DIR         = sources
INC_DIR         = includes
SRC             = $(SRC_DIR)/main.cpp $(SRC_DIR)/Weapon.cpp $(SRC_DIR)/HumanA.cpp $(SRC_DIR)/HumanB.cpp
INC             = $(INC_DIR)/Weapon.hpp $(INC_DIR)/HumanA.hpp $(INC_DIR)/HumanB.hpp
OBJ             = $(SRC:.cpp=.o)
RM              = rm -f

# Colours
DEFAULT_COLOUR  = \033[0m
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
	@echo "$(CYAN)Everything compiled and linked into executable: $(WHITE)$(NAME)$(DEFAULT_COLOUR)"

%.o: %.cpp $(INC)
	@$(CXX) $(CXXFLAGS) -I $(INC_DIR) -c $< -o $@
	@echo "$(GREEN)$< compiled successfully!$(DEFAULT_COLOUR)"

clean:
	@for file in $(OBJ); do \
		echo "$(MAGENTA)$$file deleted successfully!$(DEFAULT_COLOUR)"; \
		$(RM) $$file; \
	done

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Deleted executable: $(WHITE)$(NAME)$(DEFAULT_COLOUR)"

re: fclean all

.PHONY: all clean fclean re