#include "iter.hpp"

template <typename T>
void	out(T &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	pow2(T &a)
{
	std::cout << a * a << std::endl;
}

int main()
{
	int tab[5] = {1, 2, 3, 4, 5};

	iter(tab, 5, &out);
	std::cout << "--------------" << std::endl;
	iter(tab, 5, &pow2);
}
