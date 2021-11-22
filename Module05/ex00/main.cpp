#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b1("tom", 10);
		b1.inc_Grade();
		std::cout << b1 << std::endl;
		b1.dec_Grade();
		b1.dec_Grade();
		std::cout << b1 << std::endl;
		
		// Bureaucrat b2("f1", 0);
		// Bureaucrat b3("f2", 160);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}