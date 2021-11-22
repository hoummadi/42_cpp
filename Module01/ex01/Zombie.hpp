#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

private :
	std::string _name;

public :
	Zombie();
	Zombie(std::string name);
	~Zombie();

	std::string	get_name();

	void	set_name(std::string value);
	void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif