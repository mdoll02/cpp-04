NAME := polymorphism
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -g
SRC := Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp \

OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re