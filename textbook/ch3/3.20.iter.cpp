#include <iostream>
#include <vector>
#include <iterator>


int main()
{
	std::vector<int> ivec;
	std::cout << "Please input some integers: \n";
	int tmp;
	while (std::cin >> tmp)
		ivec.push_back(tmp);
	std::cout << "\nthe input vector len = " << ivec.size() << " , content is :\n";
	for (int i : ivec)
		std::cout << i << " ";
	std::cout << "\n";

	//add adjacent:
	for (auto iter = ivec.begin(); iter+1 != ivec.end() && iter != ivec.end(); iter += 2)
		std::cout << *iter + *(iter + 1) << " ";
	std::cout << std::endl;

	//add first one and last one:
	std::cout << "add first and last:\n";
	for (auto iter1 = ivec.begin(), iter2 = ivec.end() - 1; iter1 != iter2 && iter1 != iter2 + 1; ++iter1, --iter2)
		std::cout << *iter1 + *iter2 << " ";
	std::cout << std::endl;

}
