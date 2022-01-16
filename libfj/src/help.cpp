#include "help.hpp"

void fj::helpmenu()
{
	std::string availableCmd[] = {
	    "-h", "--help",
	    "-v", "--version"};

	std::cout << "Currently available commands are: " << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << availableCmd[i] << " ";
	}
}