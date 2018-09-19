#include <iostream>

int main()
{
	constexpr int SIZE = 10;
	int arr[SIZE];
	for (std::size_t i = 0; i < SIZE; ++i)
		arr[i] = i;

	for (int i : arr)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;

}
