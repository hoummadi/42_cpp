#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <iterator>

class NFException : public std::exception
{
	public:
	virtual const char * what() const throw();
};

template <typename T>
typename T::iterator	easyfind(T &vex, int value)
{
	typename T::iterator iter;
	iter = std::find(vex.begin(), vex.end(), value);
	if (iter == vex.end())
		throw NFException();
	return iter;
}

#endif