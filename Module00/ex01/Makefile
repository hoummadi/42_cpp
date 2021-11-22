NAME = phonebook

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	Contact.cpp		\
		Phonebook.cpp	\
		main.cpp

OBJ = 	Contact.o	\
		Phonebook.o	\
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