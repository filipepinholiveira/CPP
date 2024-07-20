


SRC =  Bureaucrat.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -std=c++98 -g -Wall -Wextra -Werror
RM = rm -rf

NAME = Bureaucrat
# controll codes
RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

all: $(NAME)
	@echo -n "\n"
	@echo -n "$(GREEN)    ____ $(RED)   _     _   \n$(RESET)"
	@echo -n "$(GREEN)   |  __|$(RED) _| |_ _| |_ \n$(RESET)"
	@echo -n "$(GREEN)   | |__ $(RED)|_   _|_   _|\n$(RESET)"
	@echo -n "$(GREEN)   |____|  $(RED)|_|   |_|  \n$(RESET)"
	@echo -n "$(GREEN)                      \n$(RESET)"
	@echo -n "\n"
	@echo "$(YELLOW)Compiling $(NAME)"
	
$(NAME): $(OBJ)	
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished"

$(OBJ): %.o: %.cpp
	@$(CC) $(FLAGS) -c $<

clean:
	@echo -n "\n"
	@echo -n "$(GREEN)    ____ $(RED)   _     _   \n$(RESET)"
	@echo -n "$(GREEN)   |  __|$(RED) _| |_ _| |_ \n$(RESET)"
	@echo -n "$(GREEN)   | |__ $(RED)|_   _|_   _|\n$(RESET)"
	@echo -n "$(GREEN)   |____|  $(RED)|_|   |_|  \n$(RESET)"
	@echo -n "$(GREEN)                      \n$(RESET)"
	@echo -n "\n"
	@echo "$(YELLOW) Deleting all objects"
	@$(RM) -r $(OBJ)
	@echo "$(GREEN) Objects deleted"

fclean: clean
	@echo "$(YELLOW) Deleting $(NAME)"
	@$(RM) -r $(NAME)
	@echo "$(GREEN) $(NAME) deleted"

re: fclean $(NAME)

.PHONY: all clean fclean re