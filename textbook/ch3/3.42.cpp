#include <iostream>
#include <vector>

int main()
{
	constexpr int LEN = 20;
	std::vector<int> ivec(LEN);

	int tmp = 0;
	for ( int & i : ivec)
		i = tmp++;

	int arr[LEN];
	for (int i = 0; i < LEN; i++)
		arr[i] = ivec[i];

	for (int i : arr)
		std::cout << i << " ";
	std::cout << std::endl;


	return 0;

}
