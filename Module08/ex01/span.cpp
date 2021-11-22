#include "span.hpp"

Span::Span(){};

Span::Span(unsigned int N) : _n(N){};

Span::~Span(){};

Span::Span(Span const & data)
{
	*this = data;
}

Span & Span::operator=(Span const & data)
{
	if (this != &data)
	{
		this->_vex.clear();
		this->_n = data.getN();
		this->_vex = data.getValues();
	}
	return *this;
}

int Span::operator[](int i)
{
	if (i < 0 || i >= (int)this->_n)
		throw Span::InvalidIndexException();
	return this->_vex[i];
}

unsigned int Span::getN() const
{
	return this->_n;
}

std::vector<int> const &Span::getValues() const
{
	return this->_vex;
}

void    Span::addNumber(int value)
{
	if (this->_n <= this->_vex.size())            
		throw Span::FullException();
	this->_vex.push_back(value);
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_n < this->_vex.size() + std::distance(begin, end))
		throw FullException();
	this->_vex.insert(this->_vex.end(), begin, end);
}

int Span::shortestSpan()
{
	if (this->_vex.size() < 2)
		throw Span::NoSpanException();

	std::vector<int> tmp(this->_vex);
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::iterator value = tmp.begin();
	std::vector<int>::iterator next = tmp.begin();
	next++;

	int min = *next - *value;

	while (next != tmp.end())
	{
		if (min > *next - *value)
			min = *next - *value;
		value++;
		next++;
	}
	return min;
}

int Span::longestSpan()
{
	if (this->_vex.size() < 2)
		throw Span::NoSpanException();

	std::vector<int> tmp(this->_vex);
	std::sort(tmp.begin(), tmp.end());

	int min = tmp.front();
	int max = tmp.back();
	return  (max - min);
}

const char *Span::InvalidIndexException::what() const throw()
{
	return "Invalid index!!!";
}

const char *Span::FullException::what() const throw()
{
	return "Span is full";
}

const char *Span::NoSpanException::what() const throw()
{
	return "Error : span size < 2!!!";
}
