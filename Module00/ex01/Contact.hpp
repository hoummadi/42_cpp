#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact {

private :
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

public :
	Contact();
	Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
	~Contact();

	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	std::string	get_phone_number();
	std::string	get_darkest_secret();

	void	set_first_name(std::string value);
	void	set_last_name(std::string value);
	void	set_nickname(std::string value);
	void	set_phone_number(std::string value);
	void	set_darkest_secret(std::string value);
};

#endif