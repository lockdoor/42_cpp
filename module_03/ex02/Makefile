NAME = claptrap

CC = c++
CFLAGS = -Wall -Wextra -Werror  -Wno-shadow  -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

m:
	./$(NAME)

l:
# valgrind --leak-check=full ./$(NAME)
	leaks --atExit -- ./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
