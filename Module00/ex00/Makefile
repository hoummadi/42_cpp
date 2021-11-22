NAME = megaphone

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC = megaphone.cpp

OBJ = megaphone.o

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
