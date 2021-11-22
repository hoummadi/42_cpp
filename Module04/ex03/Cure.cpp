#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::Cure(Cure const & data){
	*this = data;
}

Cure::~Cure(){}

Cure &	Cure::operator=(Cure const & data){
	(void)data;
	return *this;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const{
	AMateria* cure = new Cure();
	return cure;
}
