NAME = harl

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Harl.cpp

# HEADERS = 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

m:
	./$(NAME) $(SRCS) buf str

l:
	valgrind --leak-check=full ./$(NAME)

clean:
	rm -f $(OBJS) *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re