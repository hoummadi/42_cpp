#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{

private :
	Brain*	_brain;

public :
	Cat();
	Cat(Cat const & data);
	virtual ~Cat();

	Cat &	operator=(Cat const & data);

	void makeSound() const;

	Brain*	get_brain() const;
	void	set_brain(Brain* value);
};

#endif