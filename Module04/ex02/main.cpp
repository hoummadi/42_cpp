#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// {
	// 	Animal *a = new Animal();
	// 	Animal	b;

	// 	delete a;
	// }
	{
		Animal* animals[6];

		for (int i = 0; i < 6; i++){
			if (i < 3)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << "-------" << std::endl;
		for (int i = 0; i < 6; i++){
			delete animals[i];
		}
	}
	std::cout << std::endl << "---------------------------" << std::endl << std::endl;
	{
		Cat* j = new Cat();
		Brain b;

		b.setIdias("dumb");
		j->set_brain(&b);

		Cat* t = new Cat(*j);

		std::cout << std::endl << t->get_brain()->getIdias() << std::endl << std::endl;

		b.setIdias("stupid");
		t->set_brain(&b);
		
		std::cout << j->get_brain()->getIdias() << std::endl;
		std::cout << t->get_brain()->getIdias() << std::endl;

		std::cout << std::endl;

		delete j;
		delete t;
	}
	std::cout << std::endl << "---------------------------" << std::endl << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
		system("leaks animals");
	}
	{
		Dog		basic;
		Brain	a;

		a.setIdias("ooooo");
		basic.set_brain(&a);
		Dog tmp = basic;

		std::cout << tmp.get_brain()->getIdias() << std::endl;
		std::cout << basic.get_brain()->getIdias() << std::endl;

		a.setIdias("bbbbb");
		basic.set_brain(&a);
		std::cout << "-------" << std::endl;
		std::cout << tmp.get_brain()->getIdias() << std::endl;
		std::cout << basic.get_brain()->getIdias() << std::endl;
	}
}