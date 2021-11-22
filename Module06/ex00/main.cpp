#include "Conversion.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string	value(av[1]);
		Conversion s(value);
		std::cout << s << std::endl;
	}
	return 0;
}