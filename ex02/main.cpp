#include <string>
#include <iostream>

int	main()
{
	std::string string("HI THIS IS BRAIN");
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory address of the string variable: "<< &string << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: "<< &stringREF << std::endl;

	std::cout << "" << std::endl;
	std::cout << "Value of the string variable: " << string << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	/*std::cout << "" << std::endl;
	stringREF = "IT ISN'T BRAIN";
	std::cout << "string: " << string << std::endl;
	std::cout << "Adresse of string : " << stringPTR << std::endl;
	std::cout << "Value pointed of by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Adresse held by stringREF: " << &stringREF << std::endl;

	std::cout << "" << std::endl;
	std::cout << "Size of pointer: " << sizeof(stringPTR) << std::endl;
	std::cout << "Size of reference: " << sizeof(stringREF) << std::endl;*/
	return 0;
}
