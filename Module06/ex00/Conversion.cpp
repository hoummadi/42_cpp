#include "Conversion.hpp"

Conversion::Conversion() : _value(""){};

Conversion::Conversion(std::string value) : _value(value){};

Conversion::Conversion(Conversion const & data)
{
	*this = data;
}

Conversion::~Conversion(){};

Conversion & Conversion::operator=(Conversion const & data)
{
	if (this != &data)
		(std::string)this->_value =  data.getValue();
	return *this;
}

std::string	Conversion::getValue() const
{
	return this->_value;
}

char	Conversion::toChar() const
{
	char var;
	try 
	{
		var = static_cast<char>(std::stoi(this->_value));
		if (!std::isprint(var))
			throw Conversion::NonDisplayableException();
	}
	catch (Conversion::NonDisplayableException &e)
	{
		throw Conversion::NonDisplayableException();
	}
	catch (std::exception &e)
	{
		throw Conversion::ImpossibleException();
	}
	return var;
}

int	Conversion::toInt() const
{
	int	var;
	try
	{
		var = static_cast<int>(std::stoi(this->_value));
	}
	catch (std::exception &e)
	{
		throw Conversion::ImpossibleException();
	}
	return var;
}

float	Conversion::toFloat() const
{
	float var;
	try
	{
		var = static_cast<float>(std::stof(this->_value));
	}
	catch (std::exception &e)
	{
		throw Conversion::ImpossibleException();
	}
	return var;
}

double	Conversion::toDouble() const
{
	double	var;
	try
	{
		var = static_cast<double>(std::stod(this->_value));
	}
	catch (std::exception &e)
	{
		throw Conversion::ImpossibleException();
	}
	return var;
}

std::ostream & operator<<(std::ostream & o, Conversion & data)
{
	std::cout << "char : ";
	try
	{
		char c = data.toChar();
		std::cout << "'" << c << "'" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "int : ";
	try
	{
		std::cout << data.toInt() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "float : ";
	try
	{
		float	f = data.toFloat();
		std::cout << f;
		if (!std::isnan(f) && f - (int)f == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "double : ";
	try
	{
		double	d = data.toDouble();
		std::cout << d;
		if (!std::isnan(d) && d - (int)d == 0)
			std::cout << ".0";
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	return o;
}