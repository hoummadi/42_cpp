#include <iostream>
#include <fstream>

void	repl(std::string &str, const std::string &s1, const std::string &s2)
{
	std::string	p1;
	std::string	p2;
	std::size_t	idx;

	std::size_t	found = str.find(s1);
	while (found != std::string::npos){
		idx = found + s1.size();
		p1 = str.substr(0, found);
		p1 += s2;
		p1 += str.substr(idx, str.size());
		str = p1;
		idx = found + s2.size();
		found = str.find(s1, idx);
	}
}

int	main(int ac, char **av)
{
	if (ac != 4){
		std::cout << "Error: bad args" << std::endl;
		return 1;
	}

	std::ifstream in (av[1], std::ifstream::in);
	if (!in.is_open())
	{
		std::cout << "Error: maybe file not found" << std::endl;
		return 0;
	}
	std::ofstream out (std::string(av[1]) + ".replace", std::ofstream::trunc);
	if (!out.is_open())
	{
		std::cout << "Error!" << std::endl;
		in.close();
		return 0;
	}

	if (av[2][0] == '\0' || av[3][0] == '\0')
	{
		std::cout << "Error!" << std::endl;
		in.close();
		out.close();
		return 0;
	}
	
	std::string	line;
	while (getline(in, line))
	{
		repl(line, av[2], av[3]);
		out << line << std::endl;
		line.clear();
	}

	in.close();
	out.close();
	return 0;
}