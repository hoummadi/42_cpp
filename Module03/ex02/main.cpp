#include "FragTrap.hpp"

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

	FragTrap	s1("s1");
	FragTrap	s2("s2");

	s1.attack("s2");
	s2.takeDamage(30);
	std::cout << "s2 health : " << s2.get_Hitpoints() << std::endl;
	s1.highFivesGuys();

	return 0;
}
