#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat Default constructor called" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(Cat const & data){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = data;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & data){
	if (this != &data)
	{
		this->_brain = new Brain(*data.get_brain());
		this->setType(data.getType());
	}
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Miaw" << std::endl;
}

Brain*	Cat::get_brain() const{
	return this->_brain;
}

void	Cat::set_brain(Brain* value){
	this->_brain->setIdias(value->getIdias());
}
