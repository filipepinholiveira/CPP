SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -std=c++98 -g -Wall -Wextra -Werror
RM = rm -rf

NAME = Array

# controll codes
RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)    ____ $(RED)   _     _   \n$(RESET)"
	@printf "$(GREEN)   |  __|$(RED) _| |_ _| |_ \n$(RESET)"
	@printf "$(GREEN)   | |__ $(RED)|_   _|_   _|\n$(RESET)"
	@printf "$(GREEN)   |____|  $(RED)|_|   |_|  \n$(RESET)"
	@printf "$(GREEN)                      \n$(RESET)"
	@printf "\n"
	@echo "$(YELLOW)Compiling $(NAME)"
	
$(NAME): $(OBJ)	
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished"

$(OBJ): %.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $<

clean:
	@printf "\n"
	@printf "$(GREEN)    ____ $(RED)   _     _   \n$(RESET)"
	@printf "$(GREEN)   |  __|$(RED) _| |_ _| |_ \n$(RESET)"
	@printf "$(GREEN)   | |__ $(RED)|_   _|_   _|\n$(RESET)"
	@printf "$(GREEN)   |____|  $(RED)|_|   |_|  \n$(RESET)"
	@printf "$(GREEN)                      \n$(RESET)"
	@printf "\n"
	@printf "$(YELLOW) Deleting all objects"
	@$(RM) -r $(OBJ)
	@printf "$(GREEN) Objects deleted"

fclean: clean
	@printf "\n" "$(YELLOW) Deleting $(NAME)"
	@$(RM) "\n" -r $(NAME)
	@printf "\n" "$(GREEN) $(NAME) deleted"

re: fclean $(NAME)

.PHONY: all clean fclean re