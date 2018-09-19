#include <iostream>
#include <vector>
#include <iterator>



int main()
{

	std::vector<int> ivec;
	std::cout << "Please input 10 integers:";
	for (int i = 0; i < 10; ++i)
	{
		int tmp;
		while (!(std::cin >> tmp))
		{
			std::cin.clear();
			while(std::cin.get() != '\n')
				continue;
			std::cout << "illegal input, re-input an integer again:";
		}

		ivec.push_back(tmp);
	
	}
	std::cout << "\nthe input is below:\n";
	for (int i : ivec)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "mul * 2 : \n";
	for (auto iter=ivec.begin(); iter != ivec.end(); ++iter)
		*iter *= 2;
	for (int i : ivec)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "Bye\n";
	return 0;
}
