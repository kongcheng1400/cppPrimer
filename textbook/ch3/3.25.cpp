#include <iostream>
#include <vector>
#include <iterator>


int main()
{
	std::vector<int> scores;
	std::cout << "Please input 20 int for scores:\n";
	for (int i = 0; i < 20; i++)
	{
		int tmp = 0;
		while (!(std::cin >> tmp))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;

			std::cout << "illgal input, please input again:\n";
		}

		scores.push_back(tmp);
	
	}

	std::cout << "\nprocessing for grading the scores:\n";
	std::vector<int> grading(10);
	for (int i : scores)
	{
		int pos = scores[i] / 10;
		if (pos > grading.size())
			pos = grading.size() - 1;
		*(grading.begin() + pos) += 1;
	}


	for (int i : grading)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}
