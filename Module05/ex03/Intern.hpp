#ifndef INTERN_HPP
# define INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public :
	Intern();
	Intern(Intern const & data);
	~Intern();

	Intern &	operator=(Intern const & data);

	Form	*makeForm(std::string const & name, std::string const & target);
};

#endif