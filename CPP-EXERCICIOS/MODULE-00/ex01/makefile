
CC = c++
FLAGS = -std=c++98 -g -Wall -Wextra -Werror
RM = rm -rf


all: agenda.o Contact.o Phonebook.o auxiliar.o
	$(CC) $(FLAGS) agenda.o Contact.o Phonebook.o auxiliar.o -o agenda

agenda.o: agenda.cpp
	$(CC) $(FLAGS) -c agenda.cpp -o agenda.o

contact.o: Contact.cpp
	$(CC) $(FLAGS) -c Contact.cpp -o Contact.o

Phonebook.o: Phonebook.cpp
	$(CC) $(FLAGS) -c Phonebook.cpp -o Phonebook.o

auxiliar.o: auxiliar.cpp
	$(CC) $(FLAGS) -c auxiliar.cpp -o auxiliar.o

re: all

clean:
	$(RM) -r agenda.o Contact.o Phonebook.o auxiliar.o

fclean: clean
	$(RM) -r agenda

