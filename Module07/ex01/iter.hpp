#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	iter(T *tab, unsigned int size, void(*f)(T const &))
{
	for (unsigned int i = 0; i < size; i++)
		f(tab[i]);
}

#endif