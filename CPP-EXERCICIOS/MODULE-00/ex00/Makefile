
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf



# controll codes
RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K



all: megaphone.o
	@printf "\n"
	@printf "$(GREEN)    ____ $(RED)   _     _   \n$(RESET)"
	@printf "$(GREEN)   |  __|$(RED) _| |_ _| |_ \n$(RESET)"
	@printf "$(GREEN)   | |__ $(RED)|_   _|_   _|\n$(RESET)"
	@printf "$(GREEN)   |____|  $(RED)|_|   |_|  \n$(RESET)"
	@printf "$(GREEN)                      \n$(RESET)"
	@printf "\n"
	@echo "$(YELLOW)Compiling Megaphone"
	$(CC) $(FLAGS) megaphone.o -o megaphone
	@echo "$(GREEN)Finished"

megaphone.o: megaphone.cpp
	@$(CC) $(FLAGS) -c megaphone.cpp -o megaphone.o

re: all

clean:
	@printf "\n"
	@printf "$(GREEN)    ____ $(RED)   _     _   \n$(RESET)"
	@printf "$(GREEN)   |  __|$(RED) _| |_ _| |_ \n$(RESET)"
	@printf "$(GREEN)   | |__ $(RED)|_   _|_   _|\n$(RESET)"
	@printf "$(GREEN)   |____|  $(RED)|_|   |_|  \n$(RESET)"
	@printf "$(GREEN)                      \n$(RESET)"
	@printf "\n"
	@echo "$(YELLOW) Deleting all objects"
	@$(RM) -r megaphone.o
	@echo "$(GREEN)Finished"

fclean: clean
	@echo "$(YELLOW) Deleting Megaphone"
	@$(RM) -r megaphone
	@echo "$(GREEN)Finished"

