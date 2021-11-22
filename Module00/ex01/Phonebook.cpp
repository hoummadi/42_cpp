#include "Phonebook.hpp"

Phonebook::Phonebook(){
	this->_index = 0;
	this->_count = 0;
}

Phonebook::~Phonebook(){}

int	Phonebook::get_index(){
	return this->_index;
}

int	Phonebook::get_count(){
	return this->_count;
}

void	Phonebook::set_count(int value){
	this->_count = value;
}

int	is_digit(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return 0;
		i++;
	}
	return 1;
}

void	Phonebook::add_contact()
{
	std::string	str;

	std::cout << "add first name: ";
	std::getline(std::cin, str);
	this->_contacts[this->_index].set_first_name(str);

	std::cout << "add last name: ";
	std::getline(std::cin, str);
	this->_contacts[this->_index].set_last_name(str);

	std::cout << "add nickname: ";
	std::getline(std::cin, str);
	this->_contacts[this->_index].set_nickname(str);

	std::cout << "add phone number: ";
	std::getline(std::cin, str);
	while (is_digit(str) == 0)
	{
		std::cout << "Error Not A Number" << std::endl;
		std::cout << "add phone number: ";
		std::getline(std::cin, str);
	}
	this->_contacts[this->_index].set_phone_number(str);

	std::cout << "add darkest secret: ";
	std::getline(std::cin, str);
	this->_contacts[this->_index].set_darkest_secret(str);

	this->_index = (this->_index + 1) % 8;
	if (this->_count < 8)
		this->_count++;
}

std::string	check_len(std::string to_check){
	std::string	ret;

	if (to_check.length() <= 10)
		return to_check;
	ret = to_check.substr(0, 9) + ".";
	return ret;
}

void	put_in_columns(std::string s1, std::string s2, std::string s3, std::string s4){
	std::string	s;

	s = check_len(s1);
	std::cout << std::setw(10);
	std::cout << s;
	std::cout << "|";

	s = check_len(s2);
	std::cout << std::setw(10);
	std::cout << s;
	std::cout << "|";

	s = check_len(s3);
	std::cout << std::setw(10);
	std::cout << s;
	std::cout << "|";

	s = check_len(s4);
	std::cout << std::setw(10);
	std::cout << s;
	std::cout << "|" << std::endl;
}

void	Phonebook::display_contacts(){
	int			i;
	std::string	s;

	i = 0;
	if (this->_count == 0)
		return ;
	put_in_columns("index", "first name", "last name", "nickname");
	while (i < this->_count)
	{
		put_in_columns(std::to_string(i), this->_contacts[i].get_first_name(), this->_contacts[i].get_last_name(), this->_contacts[i].get_nickname());
		i++;
	}
	std::cout << "print index: ";
	std::getline(std::cin, s);
	if (is_digit(s) == 1)
	{
		std::stringstream(s) >> i;
		this->get_data_by_idx(i);
	}
	else
		std::cout << "Error Not A Number" << std::endl;
}

void	Phonebook::get_data_by_idx(int index){
	if (index < 0 || index >= this->_count)
	{
		std::cout << "Error Invalid Index!!" << std::endl;
		return ;
	}
	std::cout << "first name: ";
	std::cout << this->_contacts[index].get_first_name() << std::endl;

	std::cout << "last name: ";
	std::cout << this->_contacts[index].get_last_name() << std::endl;

	std::cout << "nickname: ";
	std::cout << this->_contacts[index].get_nickname() << std::endl;

	std::cout << "phone number: ";
	std::cout << this->_contacts[index].get_phone_number() << std::endl;

	std::cout << "darkest secret: ";
	std::cout << this->_contacts[index].get_darkest_secret() << std::endl;
}
