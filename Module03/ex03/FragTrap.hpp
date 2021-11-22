#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

public :
	FragTrap();
	FragTrap(std::string value);
	FragTrap(FragTrap const & data);
	~FragTrap();

	FragTrap &	operator=(FragTrap const & data);

	int		get_Hitpoints() const;
	int		get_Energy_points() const;
	int		get_Attack_damage() const;

	int		get_default_Hitpoints() const;
	int		get_default_Energy_points() const;
	int		get_default_Attack_damage() const;

	void	attack(std::string const & target);
	void	highFivesGuys(void);
};

#endif