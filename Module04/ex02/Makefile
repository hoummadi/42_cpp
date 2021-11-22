NAME = animals

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	main.cpp	\
		Animal.cpp	\
		Cat.cpp		\
		Dog.cpp		\
		Brain.cpp

OBJ =	main.o		\
		Animal.o	\
		Cat.o		\
		Dog.o		\
		Brain.o

all: $(NAME)

$(NAME): $(SRC)
		@$(C) $(FLAGS) $(SRC)
		@$(C) $(OBJ) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

PHONY: re clean fclean all