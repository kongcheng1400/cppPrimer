#include <iostream>
#include <vector>


int main()
{
	int i;
	std::vector<int> vi;

	while (std::cin >> i)
	{
		vi.push_back(i);
	}


	for (int j : vi)
		std::cout << j << " ";

	std::cout << std::endl;

	return 0;


}
