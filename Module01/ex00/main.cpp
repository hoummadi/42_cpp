#include "Zombie.hpp"

int	main()
{
	Zombie	z01("Zombie01");
	Zombie	*z02;
	
	z02 = newZombie("Zombie02");;

	z01.announce();
	z02->announce();
	randomChump("ZZ");
	randomChump("I'm here");
	delete z02;

	return 0;
}