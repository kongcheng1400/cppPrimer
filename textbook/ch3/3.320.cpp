#include <iostream>
#include <vector>

int main()
{
	int tmp = 0;
	std::cout << "Please input some integers: \n";
	std::vector<int> ivec;
	while (std::cin >> tmp)
	{
		ivec.push_back(tmp);
	}

	//add adjacent:
	for (std::vector<int>::size_type i = 0; i + 1 < ivec.size(); i=i + 2)
		std::cout << ivec[i] + ivec[i+1] << " ";
	std::cout << std::endl;

	
	
	for (std::vector<int>::size_type i = 0, j = ivec.size() - 1; i < j; i++, j--)
		std::cout << ivec[i] + ivec[j] << " ";
	std::cout << std::endl;

	return 0;


}
