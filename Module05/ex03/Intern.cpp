#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(Intern const & data){
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = data;
}

Intern::~Intern(){
	std::cout << "Intern Destructor called" << std::endl;
}

Intern &	Intern::operator=(Intern const & data){
	(void)data;
	return *this;
}

Form	*Intern::makeForm(std::string const & name, std::string const & target){
	std::string	forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	Form*		(*funcs[3])(std::string const & target) = {PresidentialPardonForm::clone, RobotomyRequestForm::clone, ShrubberyCreationForm::clone};
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return funcs[i](target);
		}
	}
	std::cout << "unknown form: " << name << std::endl;
	return NULL;
}
