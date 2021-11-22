#include "ClapTrap.hpp"

int main()
{
	ClapTrap	c1("c1");
	ClapTrap	c2("c2");

	std::cout << "c2 health : " << c2.get_Hitpoints() << std::endl;
	c1.attack("c2");
	c2.takeDamage(1);
	std::cout << "c2 health : " << c2.get_Hitpoints() << std::endl;
	c2.beRepaired(5);
	std::cout << "c2 health : " << c2.get_Hitpoints() << std::endl;

	return 0;
}
