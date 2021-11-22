#include "easyfind.hpp"
#include <vector>

const char *NFException::what() const throw(){
	return "Error : Not Found!!!";
}

int     main()
{
	std::vector<int> vex;

	vex.push_back(1);
	vex.push_back(10);
	vex.push_back(45);
	vex.push_back(25);
	vex.push_back(33);
	std::vector<int>::iterator it;
	try
	{
		it = easyfind(vex, 25);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}