#include <iostream>
#include <string>
#include <cctype>

int main()
{
	
	std::string str;
	std::cout << "please input a line : ";
	std::getline(std::cin, str);
	
	std::string result;
	for (auto c : str)
	{
		if (!std::ispunct(c))
			result.append(1, c);
	}

	std::cout << "after removing the punctator: " << result << std::endl;

	return 0;
}
