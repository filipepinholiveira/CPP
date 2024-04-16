
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf

all: teste.o sample.class.o
	$(CC) $(FLAGS) teste.o sample.class.o -o teste

teste.o: teste.cpp
	$(CC) $(FLAGS) -c teste.cpp -o teste.o

sample.class.o: sample.class.cpp
	$(CC) $(FLAGS) -c sample.class.cpp -o sample.class.o

re: all

clean:
	@$(RM) -r teste.o sample.class.o

fclean: clean
	@$(RM) -r teste

