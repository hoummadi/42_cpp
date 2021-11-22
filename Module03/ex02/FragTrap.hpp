#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public :
	FragTrap();
	FragTrap(std::string value);
	FragTrap(FragTrap const & data);
	~FragTrap();

	FragTrap &	operator=(FragTrap const & data);

	void	attack(std::string const & target);
	void	highFivesGuys(void);
};

#endif