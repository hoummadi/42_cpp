#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(Fixed const & data){
	std::cout << "Copy constructor called" << std::endl;
	*this = data;
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->_raw = value << Fixed::_bits;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->_raw = (int)roundf(value * (1 << Fixed::_bits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const{
	return this->_raw;
}

void	Fixed::setRawBits(int const raw){
	this->_raw = raw;
}

Fixed&	Fixed::operator=(Fixed const & data){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &data)
		this->_raw = data.getRawBits();
	return *this;
}

int		Fixed::toInt(void) const{
	return this->_raw >> Fixed::_bits;
}

float	Fixed::toFloat(void) const{
	return (this->_raw / (float)(1 << Fixed::_bits));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i){
	o << i.toFloat();
	return o;
}
