#include "span.hpp"

int main()
{
	std::vector<int> voxel;
	voxel.push_back(46);
	voxel.push_back(14);
	voxel.push_back(92);
	voxel.push_back(73);
	voxel.push_back(10);
	voxel.push_back(68);
	voxel.push_back(24);
	voxel.push_back(19);
	voxel.push_back(15);
	voxel.push_back(48);
	voxel.push_back(6);
	Span sp = Span(14);
	try
	{
		sp.addNumber(1);
		sp.addNumber(13);
		sp.addNumber(36);
		sp.addNumber(voxel.begin(), voxel.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}