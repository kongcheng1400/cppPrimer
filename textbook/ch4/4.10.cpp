#include <iostream>

int main()
{
	int tmp;
	std::cout << "Input an integer till 42:";
	while (std::cin >> tmp && tmp != 42)
		continue;
	std::cin.clear();
	while (std::cin.get() != '\n')
		continue;
	std::cout << "Bye!\n";


	return 0;


}
