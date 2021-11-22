#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

private :
	std::string		_Name;
	int				_Hitpoints;
	int				_Energy_points;
	int				_Attack_damage;

public :
	ClapTrap();
	ClapTrap(std::string value);
	ClapTrap(ClapTrap const & data);
	~ClapTrap();

	ClapTrap &	operator=(ClapTrap const & data);

	std::string	get_Name() const;
	int			get_Hitpoints() const;
	int			get_Energy_points() const;
	int			get_Attack_damage() const;

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif