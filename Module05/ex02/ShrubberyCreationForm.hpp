#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form{

private :
	ShrubberyCreationForm();

public :
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & data);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & data);

	virtual void	execute(Bureaucrat const & executor) const;
};

#endif