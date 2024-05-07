


SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -std=c++98 -g -Wall -Wextra -Werror
RM = rm -rf

NAME = #NAME

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
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished"

$(OBJ): %.o: %.cpp
	@$(CC) $(FLAGS) -c $<

clean:
	@printf "\n"
	@printf "$(GREEN)    ____ $(RED)   _     _   \n$(RESET)"
	@printf "$(GREEN)   |  __|$(RED) _| |_ _| |_ \n$(RESET)"
	@printf "$(GREEN)   | |__ $(RED)|_   _|_   _|\n$(RESET)"
	@printf "$(GREEN)   |____|  $(RED)|_|   |_|  \n$(RESET)"
	@printf "$(GREEN)                      \n$(RESET)"
	@printf "\n"
	@echo "$(YELLOW) Deleting all objects"
	@$(RM) -r $(OBJ)
	@echo "$(GREEN) Objects deleted"

fclean: clean
	@echo "$(YELLOW) Deleting $(NAME)"
	@$(RM) -r $(NAME)
	@echo "$(GREEN) $(NAME) deleted"

re: fclean $(NAME)

.PHONY: all clean fclean re