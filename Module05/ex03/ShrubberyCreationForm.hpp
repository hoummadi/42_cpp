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
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & data);

	virtual void	execute(Bureaucrat const & executor) const;
	static Form*			clone(std::string const & target);
};

#endif