NAME = animals

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	main.cpp		\
		Animal.cpp		\
		Cat.cpp			\
		Dog.cpp			\
		WrongAnimal.cpp	\
		WrongCat.cpp

OBJ =	main.o			\
		Animal.o		\
		Cat.o			\
		Dog.o			\
		WrongAnimal.o	\
		WrongCat.o

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