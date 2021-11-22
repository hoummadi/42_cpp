#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{

private :
	Brain*	_brain;

public :
	Dog();
	Dog(Dog const & data);
	virtual ~Dog();

	Dog &	operator=(Dog const & data);

	void makeSound() const;

	Brain*	get_brain() const;
	void	set_brain(Brain* value);
};

#endif