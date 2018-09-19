#include <iostream>

int main()
{
	int ia[3][4] {{0, 1, 2, 3}, {4, 5, 6, 7,}, {8, 9, 10, 11}};
	std::cout << "Range for:\n";
	for (const int (&arr)[4] : ia) {
		for (int i : arr)
			std::cout << i << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "index: \n";
	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < 4; j++)
			std::cout << ia[i][j] << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "by pointer:\n";
	for (const int (*p)[4] = &ia[0]; p != ia + 3; ++p) {
		for (const int * q = *p; q != *p + 4; ++q)
			std::cout << *q << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
