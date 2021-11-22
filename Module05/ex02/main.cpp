#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	{
		try {
			Bureaucrat					b1("Tom", 10);
			ShrubberyCreationForm		s_f1("home");

			std::cout << std::endl;

			try {
				s_f1.beSigned(b1);
			}
			catch (std::exception & e){
				std::cout << e.what() << std::endl;
			}

			b1.signForm(s_f1);
			std::cout << std::endl;
			s_f1.execute(b1);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;
	{
		try {
			Bureaucrat					b1("Tom", 5);
			PresidentialPardonForm		p_f1("someone");

			std::cout << std::endl;

			try {
				p_f1.beSigned(b1);
			}
			catch (std::exception & e){
				std::cout << e.what() << std::endl;
			}

			b1.signForm(p_f1);
			std::cout << std::endl;
			p_f1.execute(b1);

			b1.executeForm(p_f1);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;
	{
		try {
			Bureaucrat				b1("Tom", 5);
			RobotomyRequestForm		p_f1("target02");

			std::cout << std::endl;

			try {
				p_f1.beSigned(b1);
			}
			catch (std::exception & e){
				std::cout << e.what() << std::endl;
			}

			b1.signForm(p_f1);
			std::cout << std::endl;
			p_f1.execute(b1);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}