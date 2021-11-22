#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{

private :
	std::string		_Name;

public :
	DiamondTrap();
	DiamondTrap(std::string value);
	DiamondTrap(DiamondTrap const & data);
	~DiamondTrap();

	DiamondTrap &	operator=(DiamondTrap const & data);

	void	whoAmI();
	void	attack(std::string const & target);

	std::string	get_Name() const;
	int			get_Hitpoints() const;
	int			get_Energy_points() const;
	int			get_Attack_damage() const;
};

#endif