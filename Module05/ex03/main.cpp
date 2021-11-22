#include "Intern.hpp"

int main()
{
	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;
	{
		try {
			Intern		someRandomIntern;
			Form*		In_sh = someRandomIntern.makeForm("ShrubberyCreationForm", "DC");
			Bureaucrat	b1("you", 5);

			std::cout << std::endl;
			try {
				In_sh->beSigned(b1);
			}
			catch (std::exception & e){
				std::cout << e.what() << std::endl;
			}
			In_sh->execute(b1);
			b1.executeForm(*In_sh);
			delete In_sh;
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;
	{
		try {
			Intern		someRandomIntern;
			Form*		In_sh = someRandomIntern.makeForm("PresidentialPardonForm", "DC");
			Bureaucrat	b1("you", 5);

			std::cout << std::endl;
			try {
				In_sh->beSigned(b1);
			}
			catch (std::exception & e){
				std::cout << e.what() << std::endl;
			}
			In_sh->execute(b1);
			b1.executeForm(*In_sh);
			delete In_sh;
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}