#include <iostream>

int main()
{
	int start = 50, stop = 100;
	int sum = 0;

	int i = start;
	while (i <= 100)
	{
		sum += i;
		i++;
	}

	std::cout << "Sum = " << sum << std::endl;

	return sum;
}
