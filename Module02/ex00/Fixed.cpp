#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(Fixed const & data){
	std::cout << "Copy constructor called" << std::endl;
	this->_raw = data.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

Fixed &	Fixed::operator=(Fixed const & data){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &data)
		this->_raw = data.getRawBits();
	return *this;
}
