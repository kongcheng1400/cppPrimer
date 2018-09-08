#include <iostream>
#include <string>
#include <vector>


int main()
{
	std::string str;
	std::vector<std::string> vstr;

	while (std::cin >> str)
		vstr.push_back(str);

	
	for (auto st : vstr)
		std::cout << st << " ";

	std::cout << std::endl;
	return 0;

}
