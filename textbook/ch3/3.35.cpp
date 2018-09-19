#include <iostream>

int main()
{
	constexpr int SIZE = 5;
	int arr[SIZE] = {0, 2, 4, 6, 8};
	std::cout << "Array: ";
	for (int i : arr)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "puts all elements to 0: ";
	for (int *p = arr; p < arr + SIZE; ++p)
		*p = 0;
	for (int i : arr)
		std::cout << i << " ";
	std::cout << std::endl;


	return 0;

}
