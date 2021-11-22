#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(Ice const & data){
	*this = data;
}

Ice::~Ice(){}

Ice &	Ice::operator=(Ice const & data){
	(void)data;
	return *this;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const{
	AMateria* ice = new Ice();
	return ice;
}
