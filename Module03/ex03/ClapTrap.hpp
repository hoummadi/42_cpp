#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

protected :
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

	void	set_Name(std::string value);
	void	set_Hitpoints(int value);
	void	set_Energy_points(int value);
	void	set_Attack_damage(int value);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif