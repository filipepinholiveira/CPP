
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf


all: agenda.o
	$(CC) $(FLAGS) agenda.o -o agenda

agenda.o: agenda.cpp
	$(CC) $(FLAGS) -c agenda.cpp -o agenda.o

re: all

clean:
	$(RM) -r agenda.o

fclean: clean
	$(RM) -r agenda



# all: megaphone.o Megaphone.Class.o
# 	$(CC) $(FLAGS) megaphone.o Megaphone.Class.o -o megaphone

# megaphone.o: megaphone.cpp
# 	$(CC) $(FLAGS) -c megaphone.cpp -o megaphone.o

# sample.class.o: sample.class.cpp
# 	$(CC) $(FLAGS) -c Megaphone.Class.cpp -o Megaphone.Class.o

# re: all

# clean:
# 	@$(RM) -r megaphone.o Megaphone.Class.o

# fclean: clean
# 	@$(RM) -r megaphone

