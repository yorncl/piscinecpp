CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert

SRCS =  main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all