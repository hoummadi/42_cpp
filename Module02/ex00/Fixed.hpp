#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

private :
	int					_raw;
	static const int	_bits;

public :
	Fixed();
	Fixed(Fixed const & data);
	~Fixed();

	Fixed &	operator=(Fixed const & data);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif