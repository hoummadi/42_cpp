#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_Name = "";
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string value) : ClapTrap(value){
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & data) : ClapTrap(data){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = data;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & data){
	if (this != &data)
	{
		this->_Name = data.get_Name();
		this->_Hitpoints = data.get_Hitpoints();
		this->_Energy_points = data.get_Energy_points();
		this->_Attack_damage = data.get_Attack_damage();
	}
	return *this;
}

void	ScavTrap::attack(std::string const & target){
	if (this->get_Energy_points() > 0)
	{
		std::cout << "ScavTrap " << this->get_Name() << " attack " << target;
		std::cout << ", causing " << this->get_Attack_damage() << " points of damage!" << std::endl;
		this->_Energy_points--;
	}
	else
		std::cout << "0 Energy points" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
