#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	this->_first_name = fn;
	this->_last_name = ln;
	this->_nickname = nn;
	this->_phone_number = pn;
	this->_darkest_secret = ds;
}

std::string	Contact::get_first_name(){
	return this->_first_name;
}
std::string	Contact::get_last_name(){
	return this->_last_name;
}
std::string	Contact::get_nickname(){
	return this->_nickname;
}
std::string	Contact::get_phone_number(){
	return this->_phone_number;
}
std::string	Contact::get_darkest_secret(){
	return this->_darkest_secret;
}

void	Contact::set_first_name(std::string value){
	this->_first_name = value;
}
void	Contact::set_last_name(std::string value){
	this->_last_name = value;
}
void	Contact::set_nickname(std::string value){
	this->_nickname = value;
}
void	Contact::set_phone_number(std::string value){
	this->_phone_number = value;
}
void	Contact::set_darkest_secret(std::string value){
	this->_darkest_secret = value;
}