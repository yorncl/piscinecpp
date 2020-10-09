CC = clang++
CFLAGS = -Wall -Wextra -Werror

NAME = phonebook

SRCS = Contact.cpp Main.cpp

all: $(NAME)

$(NAME): $(SRCS) Contact.hpp
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all