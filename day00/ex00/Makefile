CC = clang++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

NAME = megaphone

SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all