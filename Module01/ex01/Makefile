NAME = zombie

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	Zombie.cpp		\
		main.cpp		\
		ZombieHorde.cpp

OBJ = Zombie.o			\
		main.o			\
		ZombieHorde.o

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