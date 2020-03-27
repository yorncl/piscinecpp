CC = clang++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

NAME = replace

SRCS =  main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all