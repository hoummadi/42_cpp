#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form{

private :
	PresidentialPardonForm();

public :
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & data);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &	operator=(PresidentialPardonForm const & data);

	virtual void	execute(Bureaucrat const & executor) const;
	static Form*			clone(std::string const & target);
};

#endif