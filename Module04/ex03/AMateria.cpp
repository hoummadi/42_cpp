#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type) : _type(type){}

AMateria::AMateria(AMateria const & data){
	*this = data;
}

AMateria::~AMateria(){}

AMateria &	AMateria::operator=(AMateria const & data){
	if (this != &data)
	{
		this->_type = data.getType();
	}
	return *this;
}

std::string const & AMateria::getType() const{
	return this->_type;
}

void AMateria::use(ICharacter& target){
	std::cout << "* shoots an Materia bolt at " << target.getName() << " *" << std::endl;
}
