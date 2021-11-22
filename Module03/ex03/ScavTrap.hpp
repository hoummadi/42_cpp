#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{

public :
	ScavTrap();
	ScavTrap(std::string value);
	ScavTrap(ScavTrap const & data);
	~ScavTrap();

	ScavTrap &	operator=(ScavTrap const & data);

	int		get_Hitpoints() const;
	int		get_Energy_points() const;
	int		get_Attack_damage() const;

	int		get_default_Hitpoints() const;
	int		get_default_Energy_points() const;
	int		get_default_Attack_damage() const;

	void	attack(std::string const & target);
	void	guardGate();
};

#endif