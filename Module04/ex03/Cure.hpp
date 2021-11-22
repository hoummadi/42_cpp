#ifndef CURE_HPP
# define CURE_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const & data);
	virtual ~Cure();

	Cure &	operator=(Cure const & data);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif