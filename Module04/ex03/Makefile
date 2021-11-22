NAME = interfaces

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	main.cpp			\
		MateriaSource.cpp	\
		AMateria.cpp		\
		Character.cpp		\
		Cure.cpp			\
		Ice.cpp

OBJ =	main.o			\
		MateriaSource.o	\
		AMateria.o		\
		Character.o		\
		Cure.o			\
		Ice.o

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