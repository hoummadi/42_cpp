#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	d("abc");

	std::cout << std::endl;

	d.whoAmI();
	d.guardGate();
	d.highFivesGuys();
	d.attack("someone");

	std::cout << std::endl;

	std::cout << "Name: " << d.get_Name() << std::endl;
	std::cout << "Hitpoints: " << d.get_Hitpoints() << std::endl;
	std::cout << "Energy points: " << d.get_Energy_points() << std::endl;
	std::cout << "Attack damage: " << d.get_Attack_damage() << std::endl;

	std::cout << std::endl;

	return 0;
}
