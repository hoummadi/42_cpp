#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_Name = "";
	ClapTrap::_Name = "_clap_name";
	this->set_Hitpoints(FragTrap::get_default_Hitpoints());
	this->set_Energy_points(ScavTrap::get_default_Energy_points());
	this->set_Attack_damage(FragTrap::get_default_Attack_damage());
}

DiamondTrap::DiamondTrap(std::string value) : _Name(value){
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	ClapTrap::_Name = value + "_clap_name";
	this->set_Hitpoints(FragTrap::get_default_Hitpoints());
	this->set_Energy_points(ScavTrap::get_default_Energy_points());
	this->set_Attack_damage(FragTrap::get_default_Attack_damage());
}

DiamondTrap::DiamondTrap(DiamondTrap const & data) : ClapTrap(data){
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = data;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & data){
	if (this != &data)
	{
		this->_Name = data.get_Name();
		this->set_Hitpoints(data.get_Hitpoints());
		this->set_Energy_points(data.get_Energy_points());
		this->set_Attack_damage(data.get_Attack_damage());
	}
	return *this;
}

void	DiamondTrap::whoAmI(){
	std::cout << "My name : " << this->_Name << ", My ClapTrap name : ";
	std::cout << ClapTrap::get_Name() << std::endl;
}

void	DiamondTrap::attack(std::string const & target){
	ScavTrap::attack(target);
}

std::string	DiamondTrap::get_Name() const{
	return this->_Name;
}

int		DiamondTrap::get_Hitpoints() const{
	return this->_Hitpoints;
}

int		DiamondTrap::get_Energy_points() const{
	return this->_Energy_points;
}

int		DiamondTrap::get_Attack_damage() const{
	return this->_Attack_damage;
}
