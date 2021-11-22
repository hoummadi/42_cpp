#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat {

private :
	std::string const	_Name;
	int					_Grade;
	Bureaucrat();

public :
	Bureaucrat(std::string value, int value2);
	Bureaucrat(Bureaucrat const & data);
	~Bureaucrat();

	Bureaucrat &	operator=(Bureaucrat const & data);

	std::string	getName() const;
	int			getGrade() const;

	void	inc_Grade();
	void	dec_Grade();

	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return ("Grade Too High");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return ("Grade Too Low");
		}
	};
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i);

#endif