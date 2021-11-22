#ifndef ICE_HPP
# define ICE_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const & data);
	virtual ~Ice();

	Ice &	operator=(Ice const & data);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif