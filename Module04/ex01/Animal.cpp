#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default constructor called" << std::endl;
	this->_type = "";
}

Animal::Animal(std::string value) : _type(value){
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const & data){
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = data;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}

Animal &	Animal::operator=(Animal const & data){
	if (this != &data)
	{
		this->_type = data.getType();
	}
	return *this;
}

std::string	Animal::getType() const{
	return this->_type;
}

void	Animal::setType(std::string value){
	this->_type = value;
}

void	Animal::makeSound() const{
	std::cout << "grrrrrrr" << std::endl;
}
