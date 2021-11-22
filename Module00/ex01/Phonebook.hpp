#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

class Phonebook {

private:
	Contact	_contacts[8];
	int		_index;
	int		_count;

public :
	Phonebook();
	~Phonebook();

	int	get_index();
	int	get_count();

	void	set_count(int value);
	void	add_contact();
	void	display_contacts();
	void	get_data_by_idx(int index);
};

#endif