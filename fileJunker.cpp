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
		else if (!std::strcmp(argv[1], "-v") || !std::strcmp(argv[1], "--version"))
		{
			std::cout << "Current version of File Junker : v1.0.0" << std::endl;
		}
		else if (!std::strcmp(argv[1], "-s") || !std::strcmp(argv[1], "--size"))
		{
			std::cout << "Provided size is: " << argv[2] << " Bytes" << std::endl;

			std::cout << "Creating a dummy file......" << std::endl;
#ifdef linux
			std::string givenSize = argv[2];
			std::string createCmd = "dd if=/dev/zero of=dummyfile.bin bs=" + givenSize + " count=1";
			system(createCmd.c_str());
#endif
#ifdef OS_Windows
			std::cout << "Working on it";
#endif
		}
		else
		{
			std::cerr << "Invalid argument passed. Use --help switch to see available commands" << std::endl;
		}
	}
}
