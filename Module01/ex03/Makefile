NAME = war

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	Weapon.cpp		\
		HumanA.cpp		\
		HumanB.cpp		\
		main.cpp

OBJ =	Weapon.o		\
		HumanA.o		\
		HumanB.o		\
		main.o

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