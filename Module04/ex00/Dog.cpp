#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog Default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(Dog const & data){
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = data;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & data){
	if (this != &data)
	{
		this->setType(data.getType());
	}
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Haw" << std::endl;
}
