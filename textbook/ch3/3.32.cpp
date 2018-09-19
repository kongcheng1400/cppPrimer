#include <iostream>
#include <vector>

int main()
{
	constexpr int SIZE = 10;
	int arr[SIZE];
	for (std::size_t i = 0; i < SIZE; ++i)
		arr[i] = i;

	for (int i : arr)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "Copy to another array:\n";
	int arr1[SIZE];
	for (std::size_t i = 0; i < SIZE; ++i)
		arr1[i] = arr[i];

	for (int i : arr)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "using vector:\n";
	std::vector<int> ivec(10);
	int tmp = 0;
	for (int & i : ivec)
		i = tmp++;
	for (int i : ivec)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;

}
