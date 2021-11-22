#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::~Weapon(){}

Weapon::Weapon(std::string type) : _type(type) {}

void	Weapon::setType(std::string value){
	this->_type = value;
}

const std::string	&Weapon::getType(void) const{
	return this->_type;
}
