NAME = form

C = clang++

FLAGS = -Wall -Wextra -Werror -c

SRC =	main.cpp		\
		Bureaucrat.cpp	\
		Form.cpp

OBJ =	main.o			\
		Bureaucrat.o	\
		Form.o

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