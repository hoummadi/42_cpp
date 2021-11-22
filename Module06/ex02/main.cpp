#include "Base.hpp"

Base * generate(void)
{
	int		r = rand() % 3;
	Base	*b;

	if (!r)
		b = new A();
	else if (r == 1)
		b = new B();
	else
		b = new C();
	return b;
}

void	identify(Base * p)
{
	if ((dynamic_cast<A*>(p)))
		std::cout << "A" << std::endl;
	else if ((dynamic_cast<B*>(p)))
		std::cout << "B" << std::endl;
	else if ((dynamic_cast<C*>(p)))
		std::cout << "C" << std::endl;
}

void	identify(Base & p)
{
	Base	b;

	try
	{
		b = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast & e){}

	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast& e){}

	try
	{
		b = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast& e){}
}

int main()
{
	Base	*b1;
	Base	*b2;

	srand(time(0));
	b1 = generate();
	b2 = generate();
	identify(b1);
	identify(b2);

	Base	&br1 = *b1;
	Base	&br2 = *b2;

	identify(br1);
	identify(br2);

	delete b1;
	delete b2;
	return 0;
}
