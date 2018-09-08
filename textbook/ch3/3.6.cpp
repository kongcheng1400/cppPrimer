#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string str, result;
	std::cout << "Please input a line: ";
	std::getline(std::cin, str);
	for (char & c : str)
		if (std::isalpha(c))
			c = 'X';

	std::cout << "to upper: " << str << std::endl;
	return 0;
}
