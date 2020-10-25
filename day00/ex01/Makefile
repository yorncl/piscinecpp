CC = clang++
CFLAGS = -Wall -Wextra -Werror

NAME = crappy_phonebook

SRCS = Contact.cpp Main.cpp Phonebook.cpp Utils.cpp
HEADERS = Contact.hpp Phonebook.hpp Utils.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all