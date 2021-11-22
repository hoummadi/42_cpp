# include "Character.hpp"

Character::Character(){
	for (int i = 0; i < 4; i++){
		this->inventory[i] = NULL;
	}
}

Character::Character(std::string const & name) : _name(name){
	for (int i = 0; i < 4; i++){
		this->inventory[i] = NULL;
	}
}

Character::Character(Character const & data){
	*this = data;
}

Character::~Character(){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character &	Character::operator=(Character const & data){
	if (this != &data)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
		}
		for (int i = 0; i < 4; i++)
			this->inventory[i] = data.inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}
