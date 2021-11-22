#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB {

private :
	std::string	_name;
	Weapon*		_weapon;

public :
	HumanB();
	HumanB(std::string name);
	~HumanB();

	void	set_name(std::string value);
	void	setWeapon(Weapon &value);
	void	attack();
};

#endif