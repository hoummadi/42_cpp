#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & data){
	*this = data;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & data){
	if (this != &data)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = data._inventory[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* value){
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = value->clone();
			break ;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
		{
			return this->_inventory[i]->clone();
		}
	}
	return NULL;
}
