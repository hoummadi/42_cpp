#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {

private :
	std::string		_ideas[100];

public :
	Brain();
	Brain(Brain const & data);
	~Brain();

	Brain &	operator=(Brain const & data);

	std::string	getIdias() const;
	void		setIdias(std::string value);

};

#endif