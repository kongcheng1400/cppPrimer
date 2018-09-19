#include <iostream>
#include <vector>

int main()
{
	int a[] = {0 , 2 ,4, 6, 8};
	std::vector<int> ivec(std::begin(a), std::end(a));
	for (int i : ivec)
		std::cout << i << " ";
	std::cout << std::endl;


	return 0;
}
