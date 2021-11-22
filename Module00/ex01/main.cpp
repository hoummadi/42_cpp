#include "Phonebook.hpp"

int	main()
{
	Phonebook	phonebook;
	std::string	cmd;

	std::cout << "Welcome To My Awesome Phonebook" << std::endl;
	std::cout << "* You can use ADD, SEARCH, EXIT *" << std::endl;
	while (1)
	{
		std::cout << ">";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "SEARCH")
			phonebook.display_contacts();
		else if (cmd == "EXIT")
			break ;
	}
	return 0;
}
