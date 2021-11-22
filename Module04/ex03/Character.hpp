#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{

private:
	std::string		_name;
	AMateria		*inventory[4];

public:
	Character();
	Character(std::string const & name);
	Character(Character const & data);
	~Character();

	Character &	operator=(Character const & data);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif