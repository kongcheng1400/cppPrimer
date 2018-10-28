#include <iostream>
#include <cmath>
#include <cstdlib>

double absTest(double d);

int main()
{
	double d1;
	std::cout << "Please input a value:";
	while (std::cin >> d1)
	{
		std::cout << "abs() = " << absTest(d1) << std::endl;
		std::cout << "Please input a value:";
	}

	std::cout << "Bye!\n";
	return 0;

}

double absTest(double d)
{
	return std::abs(d);

}
