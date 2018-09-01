#include <iostream>


int main()
{
	int start = 10, stop = 0;

	int i = start;
	while (i >= 0)
	{
		std::cout << i-- << " ";
	}

	std::cout << std::endl;

	return 0;
}
