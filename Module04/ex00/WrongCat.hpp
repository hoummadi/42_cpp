#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public :
	WrongCat();
	WrongCat(WrongCat const & data);
	~WrongCat();

	WrongCat &	operator=(WrongCat const & data);

	void makeSound() const;
};

#endif