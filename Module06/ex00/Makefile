NAME = convert

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	main.cpp		\
		Conversion.cpp

OBJ =	main.o			\
		Conversion.o

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