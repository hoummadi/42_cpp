#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Form {

private :
	std::string const	_Name;
	int	const			_Grade_sgn;
	int	const			_Grade_exec;
	bool				_is_signed;

public :
	Form();
	Form(std::string value, int value2, int value3);
	Form(Form const & data);
	~Form();

	Form &	operator=(Form const & data);

	std::string	getName() const;
	int			getG_SG() const;
	int			getG_EX() const;
	bool		is_signed() const;

	void	beSigned(Bureaucrat & b);

	class GradeTooHighException : public Bureaucrat::GradeTooHighException
	{};

	class GradeTooLowException : public Bureaucrat::GradeTooLowException 
	{};
};

std::ostream &	operator<<(std::ostream & o, Form const & i);

#endif