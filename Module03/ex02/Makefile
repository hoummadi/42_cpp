NAME = FragTrap

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp

OBJ =	main.o		\
		ClapTrap.o	\
		ScavTrap.o	\
		FragTrap.o

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