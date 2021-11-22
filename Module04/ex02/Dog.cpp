#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog Default constructor called" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::Dog(Dog const & data){
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = data;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & data){
	if (this != &data)
	{
		this->_brain = new Brain(*data.get_brain());
		this->setType(data.getType());
	}
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Haw" << std::endl;
}

Brain*	Dog::get_brain() const{
	return this->_brain;
}

void	Dog::set_brain(Brain* value){
	this->_brain->setIdias(value->getIdias());
}
