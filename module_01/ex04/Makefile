NAME = prog

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

# HEADERS = 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(OBJS): $(HEADERS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

m:
	./$(NAME) $(SRCS) return replace

l:
	valgrind --leak-check=full ./$(NAME)

clean:
	rm -f $(OBJS) *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re