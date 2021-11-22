#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", "", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & data){
	*this = data;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & data){
	if (this != &data)
		this->set_is_signed(data.is_signed());
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (this->is_signed())
	{
		if (this->getG_EX() >= executor.getGrade())
		{
			std::ofstream out (this->getTarget() + "_shrubbery", std::ofstream::trunc);
			if (out.is_open())
			{
				out << "   *    *  ()   *   *" << std::endl;
				out << "*        * /\\         *" << std::endl;
				out << "      *   /i\\\\    *  *" << std::endl;
				out << "    *     o/\\\\  *      *" << std::endl;
				out << " *       ///\\i\\    *" << std::endl;
				out << "     *   /*/o\\\\  *    *" << std::endl;
				out << "   *    /i//\\*\\      *" << std::endl;
				out << "        /o/*\\\\i\\   *" << std::endl;
				out << "  *    //i//o\\\\\\\\     *" << std::endl;
				out << "    * /*////\\\\\\\\i\\*" << std::endl;
				out << " *    //o//i\\\\*\\\\\\   *" << std::endl;
				out << "   * /i///*/\\\\\\\\\\o\\   *" << std::endl;
				out << "  *    *   ||     *    *" << std::endl;
				out.close();
			}
			else
				std::cout << "Error: file!" << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
		std::cout << "Error: " << this->getName() << " is not signed." << std::endl;
}
