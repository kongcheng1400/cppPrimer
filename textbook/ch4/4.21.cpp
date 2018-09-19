#include <iostream>
#include <vector>


int main()
{
	constexpr int VECLEN = 20;
	std::vector<int> ivec;
	for (int i = 0; i < VECLEN; ++i)
		ivec.push_back(i);

	for (int & i : ivec)
		if ( i % 2 != 0)
			i *= 2;

	for (const int & i : ivec)
		std::cout << i << " ";

	std::cout << std::endl;


	return 0;
}
