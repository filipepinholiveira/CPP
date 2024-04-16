
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf

codebeauty: codebeauty.o
	$(CC) $(FLAGS) $^ -o $@

codebeauty.o: codebeauty.cpp
	@$(CC) $(FLAGS) -c $^ -o $@

clean:
	@$(RM) -r codebeauty.o

fclean: clean
	@$(RM) -r codebeauty