#include <iostream>
#include "fact.h"


int main()
{
	std::cout << "Please input a unsigned value: ";
	unsigned v = 1;
	while (std::cin >> v)
	{
		std::cout << "fact(" << v << ") = " << fact(v) << std::endl;
	}

	std::cout << "Bye!\n";
	return 0;
}
