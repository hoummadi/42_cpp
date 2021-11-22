#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon) : _weapon(weapon){
	this->_name = "";
}
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){}
HumanA::~HumanA(){}

void	HumanA::set_name(std::string value){
	this->_name = value;
}

void	HumanA::attack(){
	std::cout << this->_name <<  " attacks with his " << this->_weapon.getType() << std::endl;
}
