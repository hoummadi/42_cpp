#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_Name = "";
	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
}

FragTrap::FragTrap(std::string value) : ClapTrap(value){
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const & data) : ClapTrap(data){
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = data;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & data){
	if (this != &data)
	{
		this->_Name = data.get_Name();
		this->_Hitpoints = data.get_Hitpoints();
		this->_Energy_points = data.get_Energy_points();
		this->_Attack_damage = data.get_Attack_damage();
	}
	return *this;
}

void	FragTrap::attack(std::string const & target){
	if (this->get_Energy_points() > 0)
	{
		std::cout << "FragTrap " << this->get_Name() << " attack " << target;
		std::cout << ", causing " << this->get_Attack_damage() << " points of damage!" << std::endl;
		this->_Energy_points--;
	}
	else
		std::cout << "0 Energy points" << std::endl;
}

void	FragTrap::highFivesGuys(void){
    std::cout << "highFivesGuys!" << std::endl;
}
