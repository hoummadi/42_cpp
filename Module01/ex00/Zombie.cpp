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
