#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {

private :
	std::string		_type;

public :
	WrongAnimal();
	WrongAnimal(std::string value);
	WrongAnimal(WrongAnimal const & data);
	~WrongAnimal();

	WrongAnimal &	operator=(WrongAnimal const & data);

	std::string	getType() const;
	void		setType(std::string value);

	void makeSound() const;
};

#endif