CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = a.out

HEADERS = Data.hpp
SRCS =  main.cpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all