#include <iostream>

int compare(int a , const int * pa);

int main()
{
	std::cout << "Please input two integer: ";
	int i = 0, j = 0;
	while (std::cin >> i >> j)
	{
		std::cout << "The bigger one is " << compare(i, &j) << std::endl;
		std::cout << "Please input two integer: ";
	
	}

	std::cout << "Bye!\n";
	return 0;



}


int compare(int a, const int * pa)
{
	if (a > *pa)
		return a;
	else
		return *pa;
}

