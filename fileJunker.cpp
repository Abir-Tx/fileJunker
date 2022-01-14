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

// Personal Defines

// Error Codes

// Driver Function
int main(int argc, char const *argv[])
{
	if (argc <= 1) /* If no args passed */
		std::cout << "No args passed. Specify the numbers of files you want to create & try again";
	else /* If args are passed */
	{
		if (!std::strcmp(argv[1], "-c"))
		{
			system("fsutil file createnew filename 1000000");
			std::cout << "Done";
		}
	}
}
