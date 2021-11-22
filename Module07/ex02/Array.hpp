#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{

private:
	T				*_t;
	unsigned int	_n;

public:
	Array(): _t(new T[0]), _n(0) {}
	Array(unsigned int n) : _t(new T[n]), _n(n) {}
	Array(Array const & data) : _t(NULL)
	{
		*this = data;
	}
	~Array(){
		delete [] _t;
	}
	Array & operator=(Array const & data)
	{
		if (this->_t)
			delete [] _t;
		if (this->_n != data.size())
			this->_n = data.size();
		this->_t = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++)
			this->_t[i] = data[i];
		return *this;
	}

	T& operator[](int i)
	{
		if (i < 0 || i >= (int)this->_n)
			throw Array::InvalidIndexException();
		return this->_t[i];
	}

	const T& operator[](int i) const
	{
		if (i < 0 || i >= (int)this->_n)
			throw Array::InvalidIndexException();
		return this->_t[i];
	}

	unsigned int size() const 
	{
		return this->_n;
	};

	class InvalidIndexException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Invalid index!!!";
			}
	};     
};

template <typename T>
std::ostream & operator<< (std::ostream & o, Array<T> data)
{
    for (unsigned int i = 0; i < data.size(); i++)
    {
        try
        {
            o << data[i] << " ";
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return o;
}

#endif