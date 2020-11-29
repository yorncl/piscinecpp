CC = clang++
CFLAGS = -Wall -Wextra -Werror

NAME = convert

HEADERS = Data.hpp
SRCS =  main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all