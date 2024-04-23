
CC = c++
FLAGS = -std=c++98 -g -Wall -Wextra -Werror
RM = rm -rf


all: Account.o test.o
	$(CC) $(FLAGS) Account.o test.o -o test

Account.o: Account.cpp
	$(CC) $(FLAGS) -c Account.cpp -o Account.o

test.o: test.cpp
	$(CC) $(FLAGS) -c test.cpp -o test.o

re: all

clean: 
	$(RM) -r Account.o test.o

fclean: clean
	$(RM) -r test