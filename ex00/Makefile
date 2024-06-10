# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tday <tday@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 15:31:37 by tday              #+#    #+#              #
#    Updated: 2024/06/10 17:31:36 by tday             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME            = zombie
CXX             = c++
CXXFLAGS        = -Wall -Wextra -Werror -std=c++98
SRC_DIR         = sources
INC_DIR         = includes
SRC             = $(SRC_DIR)/main.cpp $(SRC_DIR)/Zombie.cpp $(SRC_DIR)/newZombie.cpp $(SRC_DIR)/randomChump.cpp
INC             = $(INC_DIR)/Zombie.hpp
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
