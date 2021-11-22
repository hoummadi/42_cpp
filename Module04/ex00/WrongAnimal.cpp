#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->_type = "";
}

WrongAnimal::WrongAnimal(std::string value) : _type(value){
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & data){
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = data;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & data){
	if (this != &data)
	{
		this->_type = data.getType();
	}
	return *this;
}

std::string	WrongAnimal::getType() const{
	return this->_type;
}

void	WrongAnimal::setType(std::string value){
	this->_type = value;
}

void	WrongAnimal::makeSound() const{
	std::cout << "grrrrrrr" << std::endl;
}
