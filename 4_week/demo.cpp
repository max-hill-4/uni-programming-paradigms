#include <iostream>
#include "reg.h"
//test
int main()
{
	Registration myCode;
	std::cout << "Registration:\n";
	std::cout << "Enter the access code: ";

	if (myCode.input())
	{
		std::cout << "Register successful.\n";
		std::cout << "Your input code " << myCode.getCode() << " matches the access code\n";
		
	}
	else
	{
		std::cout << "Register unsuccessful. \n";
		std::cout << "Your input code " << myCode.getCode() << " doesn't match the access code\n";
	}
	
	std::cout << "The system has been updated with ";
	myCode.output();
	return 0;
}