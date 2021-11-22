#include "Karen.hpp"

int	main(int ac, char **av)
{
	std::string	tab_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen	karen;
	int			i = 0;

	if (ac != 2)
		return 1;
	while (i < 4)
	{
		if (av[1] == tab_levels[i])
			break ;
		i++;
	}
	switch (i) {
		case 0 : karen.complain("DEBUG");
		case 1 : karen.complain("INFO");
		case 2 : karen.complain("WARNING");
		case 3 : karen.complain("ERROR"); break;
		default : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return 0;
}