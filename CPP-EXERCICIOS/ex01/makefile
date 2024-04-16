
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf


all: agenda.o Contact.o PhoneBook.o auxiliar.o
	$(CC) $(FLAGS) agenda.o Contact.o PhoneBook.o auxiliar.o -o agenda

agenda.o: agenda.cpp
	$(CC) $(FLAGS) -c agenda.cpp -o agenda.o

contact.o: Contact.cpp
	$(CC) $(FLAGS) -c Contact.cpp -o Contact.o

PhoneBook.o: PhoneBook.cpp
	$(CC) $(FLAGS) -c PhoneBook.cpp -o PhoneBook.o

auxiliar.o: auxiliar.cpp
	$(CC) $(FLAGS) -c auxiliar.cpp -o auxiliar.o

re: all

clean:
	$(RM) -r agenda.o Contact.o PhoneBook.o auxiliar.o

fclean: clean
	$(RM) -r agenda

