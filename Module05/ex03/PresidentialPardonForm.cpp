#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", "", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & data){
	*this = data;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & data){
	if (this != &data)
		this->set_is_signed(data.is_signed());
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->is_signed())
	{
		if (this->getG_EX() >= executor.getGrade())
			std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
		else
			throw Form::GradeTooLowException();
	}
	else
		std::cout << "Error: " << this->getName() << " is not signed." << std::endl;
}

Form*	PresidentialPardonForm::clone(std::string const & target){
	Form	*clone = new PresidentialPardonForm(target);

	return	clone;
}
