#include "help.hpp"

void fj::helpmenu()
{
	std::string availableCmd[] = {
	    "-h", "--help",
	    "-v", "--version",
	    "-s", "--size",
	    "-n", "--number"};

	std::cout << "Currently available commands are: " << std::endl;
	for (int i = 0; i < sizeof(availableCmd) / sizeof(availableCmd[0]); i++)
	{
		std::cout << availableCmd[i] << " ";
	}
}

void fj::programIntro()
{
	std::cout << "An CLI tool to create dummy files of any size" << std::endl;
}