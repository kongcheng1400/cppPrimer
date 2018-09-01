#include <iostream>


int main()
{
	std::cout << "Input two integer: ";
	int i = 0, j = 0;

	std::cin >> i >> j;

	while (i <= j)
	{
		std::cout << i++ << " ";
	}

	std::cout << std::endl;


	return 0;
}
