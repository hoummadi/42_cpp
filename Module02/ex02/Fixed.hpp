#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {

private :
	int					_raw;
	static const int	_bits;

public :
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(Fixed const & data);
	~Fixed();

	Fixed &	operator=(Fixed const & data);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	int		toInt(void) const; 
	float	toFloat(void) const;

	bool	operator>(Fixed const & data);
	bool	operator<(Fixed const & data);
	bool	operator>=(Fixed const & data);
	bool	operator<=(Fixed const & data);
	bool	operator==(Fixed const & data);
	bool	operator!=(Fixed const & data);

	Fixed	operator+(Fixed const & data);
	Fixed	operator-(Fixed const & data);
	Fixed	operator*(Fixed const & data);
	Fixed	operator/(Fixed const & data);

	Fixed	operator++();		//++x
	Fixed	operator++(int);	//x++
	Fixed	operator--();
	Fixed	operator--(int);
	
	static Fixed &	min(Fixed & a, Fixed & b);
	static Fixed &	max(Fixed & a, Fixed & b);
	static Fixed const &	min(Fixed const & a, Fixed const & b);
	static Fixed const &	max(Fixed const & a, Fixed const & b);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif