#include "Form.hpp"

Form::Form() : _Grade_sgn(1), _Grade_exec(1){
	std::cout << "Form Default constructor called" << std::endl;
	this->_is_signed = false;
}

Form::Form(std::string value, std::string value1, int value2, int value3) : _Name(value), _Target(value1), _Grade_sgn(value2), _Grade_exec(value3){
	std::cout << "Form Default constructor called" << std::endl;
	this->_is_signed = false;
	if (value2 < 1 || value3 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (value2 > 150 || value3 > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(Form const & data) : _Name(data.getName()), _Grade_sgn(data.getG_SG()), _Grade_exec(data.getG_EX()){
	std::cout << "Form Copy constructor called" << std::endl;
	*this = data;
}

Form::~Form(){
	std::cout << "Form Destructor called" << std::endl;
}

Form &	Form::operator=(Form const & data){
	if (this != &data)
		this->_is_signed = data.is_signed();
	return *this;
}

std::string	Form::getName() const{
	return this->_Name;
}

std::string	Form::getTarget() const{
	return this->_Target;
}

int			Form::getG_SG() const{
	return this->_Grade_sgn;
}

int			Form::getG_EX() const{
	return this->_Grade_exec;
}

bool		Form::is_signed() const{
	return this->_is_signed;
}

void	Form::beSigned(Bureaucrat & b){
	if (b.getGrade() <= this->_Grade_sgn)
		this->_is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & o, Form const & i){
	o << "Form : " << i.getName() << ",  grade required to sign : " << i.getG_SG();
	o << ", grade required to execute : " << i.getG_EX();
	if (i.is_signed())
		o << ", is signed.";
	else
		o << ", is not signed.";
	return o;
}

void		Form::set_is_signed(bool value){
	this->_is_signed = value;
}
