NAME = zombie

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	Zombie.cpp		\
		main.cpp		\
		newZombie.cpp	\
		randomChump.cpp

OBJ = Zombie.o			\
		main.o			\
		newZombie.o		\
		randomChump.o

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