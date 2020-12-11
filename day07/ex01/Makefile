CC = clang++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

NAME = a.out

SRCS =  main.cpp
HEADERS = iter.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re