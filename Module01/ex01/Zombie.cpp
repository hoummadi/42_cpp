#include "Zombie.hpp"

Zombie::Zombie(){
	this->_name = "";
}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(){
	std::cout << this->_name << " died!" << std::endl;
}

void	Zombie::announce(){
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name(){
	return this->_name;
}

void	Zombie::set_name(std::string value){
	this->_name = value;
}
