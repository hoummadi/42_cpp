#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat	b1("Tom", 10);
		Form		f1("Form01", 11, 8);

		std::cout << std::endl;

		try {
			f1.beSigned(b1);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		b1.signForm(f1);
		std::cout << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}