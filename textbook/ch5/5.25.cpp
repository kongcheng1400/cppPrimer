#include <iostream>
#include <exception>

int main()
{
	int i, j;
	std::cout << "Please input two integer: ";
	std::cin >> i >> j;
	try {
		std::cout << i << "/" << j << " = " << i/j << std::endl;
	} catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "would you re-input two integer(y or n):";
		char ch;
		std::cin >> ch;
		if (ch == 'y' || ch == 'Y') {
			std::cin >> i >> j;
			std::cout << i << "/" << j << " = " << i/j << std::endl;
		}
		while (std::cin.get() != '\n')
			;
	}
	std::cout << "Bye!\n";
	return 0;


}
