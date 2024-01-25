NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp PhoneBook.cpp

HEADERS = PhoneBook.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(OBJS): $(HEADERS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# $(OBJS): %.o: $(SRCS) $(HEADER)
# 	$(CC) $(CFLAGS) -c $< -o $@



m:
	./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re