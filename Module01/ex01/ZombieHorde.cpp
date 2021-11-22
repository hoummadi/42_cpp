#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){
	Zombie*	Zombies = new Zombie[N];
	int		i;

	i = 0;
	while (i < N)
	{
		Zombies[i].set_name(name);
		i++;
	}
	return Zombies;
}
