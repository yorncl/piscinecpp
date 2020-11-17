CC = clang++
CFLAGS = -Wall -Wextra -Werror

NAME = convert

SRCS =  main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all