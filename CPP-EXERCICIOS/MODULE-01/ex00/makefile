
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

all: Zombie.o main.o
	@printf "\n"
	@printf "$(GREEN)    ____ $(RED)   _     _   \n$(RESET)"
	@printf "$(GREEN)   |  __|$(RED) _| |_ _| |_ \n$(RESET)"
	@printf "$(GREEN)   | |__ $(RED)|_   _|_   _|\n$(RESET)"
	@printf "$(GREEN)   |____|  $(RED)|_|   |_|  \n$(RESET)"
	@printf "$(GREEN)                      \n$(RESET)"
	@printf "\n"
	@echo "$(YELLOW)Compiling Test"
	@$(CC) $(FLAGS) Zombie.o main.o -o Zombie
	@echo "$(GREEN)Finished"

Zombie.o: Zombie.cpp
	@$(CC) $(FLAGS) -c Zombie.cpp -o Zombie.o

main.o:
	@$(CC) $(FLAGS) -c main.cpp -o main.o

re: all

clean:
	@echo "$(YELLOW) Deleting all objects"
	@$(RM) -r Zombie.o main.o
	@echo "$(GREEN)Objects deleted"

fclean: clean
	@echo "$(YELLOW) Deleting file"
	@$(RM) -r Zombie
	@echo "$(GREEN) #file deleted"