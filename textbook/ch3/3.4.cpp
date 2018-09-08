#include <iostream>
#include <string>

int main()
{
	std::string s1, s2;
	
	std::cout << "Please input a line: ";
	std::getline(std::cin, s1);

	std::cout << "Please input a line: ";
	std::getline(std::cin, s2);

	if (s1 == s2)
		std::cout << "s1 == s2" << std::endl;
	else if (s1 > s2)
		std::cout << "bigger is " << s1 << std::endl;
	else 
		std::cout << "bigger is " << s2 << std::endl;

	return 0;
}
