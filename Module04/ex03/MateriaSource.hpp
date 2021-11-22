#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria		*_inventory[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & data);
	~MateriaSource();

	MateriaSource &	operator=(MateriaSource const & data);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif