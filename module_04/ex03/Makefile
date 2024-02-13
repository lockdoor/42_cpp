NAME = a.out

CC = c++
CFLAGS = -Wall -Wextra -Werror  -Wshadow  -std=c++98
# CFLAGS = -Wall -Wextra -Werror  -Wno-shadow  -std=c++98

SRCS = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp \
		MateriaSource.cpp unitTestIMateriaSource.cpp unitTestAMateria.cpp \
		unitTestICharacter.cpp

HEADERS = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp \
			Character.hpp IMateriaSource.hpp MateriaSource.hpp \
			main.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

m:
	./$(NAME)

l:
	valgrind --leak-check=full ./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
