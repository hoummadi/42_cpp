#ifndef CONVERSION_HPP
# define CONVERSION_HPP
# include <iostream>
# include <cmath>

class Conversion
{

private:
	std::string const _value;
	Conversion();

public:
	Conversion(std::string value);
	Conversion(Conversion const & data);
	~Conversion();
	Conversion & operator=(Conversion const & data);

	std::string	getValue() const;

	char	toChar() const;
	int		toInt() const;
	float	toFloat() const;
	double	toDouble() const;
	
	class NonDisplayableException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Non displayable";
		}
	};
	class ImpossibleException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "impossible";
		}
	};
};

std::ostream & operator<<(std::ostream & o, Conversion & data);

#endif
