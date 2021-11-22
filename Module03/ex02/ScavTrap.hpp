#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public :
	ScavTrap();
	ScavTrap(std::string value);
	ScavTrap(ScavTrap const & data);
	~ScavTrap();

	ScavTrap &	operator=(ScavTrap const & data);

	void	attack(std::string const & target);
	void	guardGate();
};

#endif