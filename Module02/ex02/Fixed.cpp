#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(){
	this->_raw = 0;
}

Fixed::Fixed(Fixed const & data){
	*this = data;
}

Fixed::Fixed(const int value){
	this->_raw = value << Fixed::_bits;
}

Fixed::Fixed(const float value){
	this->_raw = (int)roundf(value * (1 << Fixed::_bits));
}

Fixed::~Fixed(){
}

int		Fixed::getRawBits(void) const{
	return this->_raw;
}

void	Fixed::setRawBits(int const raw){
	this->_raw = raw;
}

Fixed&	Fixed::operator=(Fixed const & data){
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

bool	Fixed::operator>(Fixed const & data){
	return (this->_raw > data.getRawBits());
}

bool	Fixed::operator<(Fixed const & data){
	return (this->_raw < data.getRawBits());
}

bool	Fixed::operator>=(Fixed const & data){
	return (this->_raw >= data.getRawBits());
}

bool	Fixed::operator<=(Fixed const & data){
	return (this->_raw <= data.getRawBits());
}

bool	Fixed::operator==(Fixed const & data){
	return (this->_raw == data.getRawBits());
}

bool	Fixed::operator!=(Fixed const & data){
	return (this->_raw != data.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & data){
	return Fixed(this->toFloat() + data.toFloat());
}

Fixed	Fixed::operator-(Fixed const & data){
	return Fixed(this->toFloat() - data.toFloat());
}

Fixed	Fixed::operator*(Fixed const & data){
	return Fixed(this->toFloat() * data.toFloat());
}

Fixed	Fixed::operator/(Fixed const & data){
	return Fixed(this->toFloat() / data.toFloat());
}

Fixed &	Fixed::min(Fixed & a, Fixed & b){
	if (a > b)
		return b;
	return a;
}

Fixed &	Fixed::max(Fixed & a, Fixed & b){
	if (a > b)
		return a;
	return b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b){
	if (a.getRawBits() > b.getRawBits())
		return b;
	return a;
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed	Fixed::operator++(){
	this->_raw++;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed	Fixed::operator--(){
	this->_raw--;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed tmp = *this;
	--(*this);
	return tmp;
}
