/*
A pet project of Mushfiqur Rahman Abir under GPL 3.0 License. The intention of this tool
will be to create dummy files of any specific size at once. The usage of this tool will be of course for test purposes.
Developed By: Mushfiqur Rahman Abir
Year: 2022
Date: 14th January, 2022
Build System: CMake
*/

// Includes
#include <iostream>
#include <cstring>

// Personal includes
#include "fjutils.hpp"
#include "help.hpp"
// Personal Defines

// Error Codes

// Driver Function
int main(int argc, char const *argv[])
{
	fj::utils::title();
	if (argc <= 1) /* If no args passed */
	{
		std::cout << "No args passed. Specify the numbers of files you want to create & try again";
		std::cout << std::endl;
		std::cout << std::endl;
		fj::helpmenu();
	}
	else /* If args are passed */
	{
		if (!std::strcmp(argv[1], "-h") || !std::strcmp(argv[1], "--help"))
		{
			fj::helpmenu();
		}
		else
		{
			std::cerr << "Invalid argument passed. Use --help switch to see available commands" << std::endl;
		}
	}
}
