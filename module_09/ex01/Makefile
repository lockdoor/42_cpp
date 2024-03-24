NAME = RPN

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp RPN.cpp

HEADERS = RPN.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	./tester.sh
# ./$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS)  -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

.PHONY: all m clean fclean
