#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

class Span {

private:
	std::vector<int>	_vex;
	unsigned int		_n;
	Span();

public:
	Span(unsigned int N);
	~Span();
	Span(Span const & data);
	Span & operator=(Span const & data);

	int				operator[](int i);
	unsigned int	getN() const;

	std::vector<int> const &getValues() const;

	void    addNumber(int n);
	void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	int		shortestSpan();
	int		longestSpan();

	class InvalidIndexException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

	class FullException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

	class NoSpanException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};
#endif