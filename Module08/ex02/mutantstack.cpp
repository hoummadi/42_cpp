#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & data)
{
	*this = data;
}

template <typename T>
MutantStack<T>::MutantStack(std::stack<T> const & data) : std::stack<T>(data){}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & data)
{
	this->c = data.c;
	return *this;
}
