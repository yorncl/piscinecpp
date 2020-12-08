CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

HEADERS = Base.hpp A.hpp B.hpp C.hpp
SRCS =  main.cpp Base.cpp A.cpp B.cpp C.cpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all