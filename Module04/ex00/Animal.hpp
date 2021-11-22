#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {

private :
	std::string		_type;

public :
	Animal();
	Animal(std::string value);
	Animal(Animal const & data);
	virtual ~Animal();

	Animal &	operator=(Animal const & data);

	std::string	getType() const;
	void		setType(std::string value);

	virtual void makeSound() const;
};

#endif