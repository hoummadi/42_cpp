#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string value, int value2) : _Name(value){
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	if (value2 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (value2 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade = value2;
}

Bureaucrat::Bureaucrat(Bureaucrat const & data) : _Name(data.getName()){
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = data;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & data){
	if (this != &data)
		this->_Grade = data.getGrade();
	return *this;
}

std::string	Bureaucrat::getName() const{
	return this->_Name;
}

int	Bureaucrat::getGrade() const{
	return this->_Grade;
}

void	Bureaucrat::inc_Grade(){
	if (this->_Grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_Grade--;
}
void	Bureaucrat::dec_Grade(){
	if (this->_Grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade++;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i){
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}

void	Bureaucrat::signForm(Form const & f){
	if (f.is_signed())
		std::cout << this->_Name << " signs " << f.getName() << std::endl;
	else
		std::cout << this->_Name << " cannot sign " << f.getName() << " because Grade Too Low" << std::endl;
}
