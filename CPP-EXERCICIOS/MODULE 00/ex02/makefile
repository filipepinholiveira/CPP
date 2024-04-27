
CC = c++
FLAGS = -std=c++98 -g -Wall -Wextra -Werror
RM = rm -rf



# controll codes
RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K




all: Account.o test.o
	@printf "\n"
	@printf "$(GREEN)   _____    _     _   \n$(RESET)"
	@printf "$(GREEN)  |    _| _| |_ _| |_ \n$(RESET)"
	@printf "$(GREEN)  |   |_ |_   _|_   _|\n$(RESET)"
	@printf "$(GREEN)  |_____|  |_|   |_|  \n$(RESET)"
	@printf "$(GREEN)                      \n$(RESET)"
	@printf "\n"
	@echo "$(YELLOW)Compiling Test"
	@$(CC) $(FLAGS) Account.o test.o -o test
	@echo "$(GREEN)Finished"

Account.o: Account.cpp
	@$(CC) $(FLAGS) -c Account.cpp -o Account.o

test.o: test.cpp
	@$(CC) $(FLAGS) -c test.cpp -o test.o

re: all

clean:
	@echo "$(YELLOW) Deleting all objects"
	@$(RM) -r Account.o test.o
	@echo "$(GREEN)Finished"

fclean: clean
	@echo "$(YELLOW) Deleting Test"
	@$(RM) -r test
	@echo "$(GREEN)Finished"