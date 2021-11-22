#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Form {

private :
	std::string const	_Name;
	std::string const	_Target;
	int	const			_Grade_sgn;
	int	const			_Grade_exec;
	bool				_is_signed;

public :
	Form();
	Form(std::string value, std::string value1, int value2, int value3);
	Form(Form const & data);
	virtual ~Form();

	Form &	operator=(Form const & data);

	std::string	getName() const;
	std::string	getTarget() const;
	int			getG_SG() const;
	int			getG_EX() const;
	bool		is_signed() const;
	void		set_is_signed(bool value);

	void	beSigned(Bureaucrat & b);

	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public Bureaucrat::GradeTooHighException
	{};

	class GradeTooLowException : public Bureaucrat::GradeTooLowException 
	{};
};

std::ostream &	operator<<(std::ostream & o, Form const & i);

#endif