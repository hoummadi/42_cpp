#include "HumanB.hpp"

HumanB::HumanB(){
	this->_name = "";
	this->_weapon = NULL;
}
HumanB::HumanB(std::string name) : _name(name){
	this->_weapon = NULL;
}
HumanB::~HumanB(){}

void	HumanB::set_name(std::string value){
	this->_name = value;
}

void	HumanB::setWeapon(Weapon &value){
	this->_weapon = &value;
}

void	HumanB::attack(){
	if (this->_weapon)
		std::cout << this->_name <<  " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name <<  " attacks with his " << "" << std::endl;
}
