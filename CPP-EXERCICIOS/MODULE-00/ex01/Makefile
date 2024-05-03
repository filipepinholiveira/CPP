
CC = c++
FLAGS = -std=c++98 -g -Wall -Wextra -Werror
RM = rm -rf


all: Agenda.o Contact.o Phonebook.o Auxiliares.o
	$(CC) $(FLAGS) Agenda.o Contact.o Phonebook.o Auxiliares.o -o Agenda

Agenda.o: Agenda.cpp
	$(CC) $(FLAGS) -c Agenda.cpp -o Agenda.o

Contact.o: Contact.cpp
	$(CC) $(FLAGS) -c Contact.cpp -o Contact.o

Phonebook.o: Phonebook.cpp
	$(CC) $(FLAGS) -c Phonebook.cpp -o Phonebook.o

Auxiliares.o: Auxiliares.cpp
	$(CC) $(FLAGS) -c Auxiliares.cpp -o Auxiliares.o

re: all

clean:
	$(RM) -r Agenda.o Contact.o Phonebook.o Auxiliares.o

fclean: clean
	$(RM) -r Agenda

