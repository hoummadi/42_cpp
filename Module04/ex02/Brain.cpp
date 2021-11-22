#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const & data){
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = data;
}

Brain::~Brain(){
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &	Brain::operator=(Brain const & data){
	if (this != &data)
	{
		this->setIdias(data.getIdias());
	}
	return *this;
}

std::string	Brain::getIdias() const{
	return this->_ideas[0];
}

void	Brain::setIdias(std::string value){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = value;
}
