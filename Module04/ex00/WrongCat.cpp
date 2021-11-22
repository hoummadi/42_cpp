#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const & data){
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = data;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & data){
	if (this != &data)
	{
		this->setType(data.getType());
	}
	return *this;
}

void	WrongCat::makeSound() const{
	std::cout << "Miaw" << std::endl;
}
