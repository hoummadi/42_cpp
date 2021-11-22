#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat Default constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat(Cat const & data){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = data;
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & data){
	if (this != &data)
	{
		this->setType(data.getType());
	}
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Miaw" << std::endl;
}
