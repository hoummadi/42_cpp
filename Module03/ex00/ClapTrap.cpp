#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
	this->_Name = "";
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string value) : _Name(value){
	std::cout << "Default constructor called" << std::endl;
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & data){
	std::cout << "Copy constructor called" << std::endl;
	*this = data;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & data){
	if (this != &data)
	{
		this->_Name = data.get_Name();
		this->_Hitpoints = data.get_Hitpoints();
		this->_Energy_points = data.get_Energy_points();
		this->_Attack_damage = data.get_Attack_damage();
	}
	return *this;
}

std::string	ClapTrap::get_Name() const{
	return this->_Name;
}

int		ClapTrap::get_Hitpoints() const{
	return this->_Hitpoints;
}

int		ClapTrap::get_Energy_points() const{
	return this->_Energy_points;
}

int		ClapTrap::get_Attack_damage() const{
	return this->_Attack_damage;
}

void	ClapTrap::attack(std::string const & target){
	if (this->get_Energy_points() > 0)
	{
		std::cout << "ClapTrap " << this->get_Name() << " attack " << target;
		std::cout << ", causing " << this->get_Attack_damage() << " points of damage!" << std::endl;
		this->_Energy_points--;
	}
	else
		std::cout << "0 Energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->get_Name() << " take ";
	std::cout << amount << " points of damage!" << std::endl;
	this->_Hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap " << this->get_Name() << " Repaired with ";
	std::cout << amount << " points of health!" << std::endl;
	this->_Hitpoints += amount;
}
