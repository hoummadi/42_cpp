#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal{

public :
	Cat();
	Cat(Cat const & data);
	~Cat();

	Cat &	operator=(Cat const & data);

	void makeSound() const;
};

#endif