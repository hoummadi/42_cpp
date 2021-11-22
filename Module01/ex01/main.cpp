#include "Zombie.hpp"

int	main()
{
	Zombie*	Zombies;
	int		i;

	i = 0;
	Zombies = zombieHorde(10, "Zombie");
	while (i < 10)
	{
		Zombies[i].announce();
		i++;
	}
	delete [] Zombies;
	return 0;
}