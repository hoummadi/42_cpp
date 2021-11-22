#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", "", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & data){
	*this = data;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & data){
	if (this != &data)
		this->set_is_signed(data.is_signed());
	return *this;
}

int		random_num()
{
	int	num;

	srand(time(NULL));
	num = rand() % 2;
	return num;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->is_signed())
	{
		if (this->getG_EX() >= executor.getGrade())
		{
			std::cout << "Vmmmmmmmm..." << std::endl;
			if (random_num())
				std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
			else
				std::cout << "It’s a failure!" << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
		std::cout << "Error: " << this->getName() << " is not signed." << std::endl;
}

Form*	RobotomyRequestForm::clone(std::string const & target){
	Form	*clone = new RobotomyRequestForm(target);

	return	clone;
}
