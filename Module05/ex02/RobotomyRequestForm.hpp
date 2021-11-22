#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form{

private :
	RobotomyRequestForm();

public :
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & data);
	~RobotomyRequestForm();

	RobotomyRequestForm &	operator=(RobotomyRequestForm const & data);

	virtual void	execute(Bureaucrat const & executor) const;
};

#endif