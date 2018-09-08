#include <iostream>
#include <vector>
#include <string>
#include <iterator>

int main()
{
	std::vector<std::string> strVec;
	std::string tmp;
	std::cout << "Please input some words:\n";
	while (std::cin >> tmp)
		strVec.push_back(tmp);

	//change to upper case.
	for (std::string & str : strVec)
		for (auto iter=str.begin(); iter != str.end(); ++iter)
		{
			*iter = std::toupper(*iter);
		}
	//output
	for (std::string str : strVec)
		std::cout << str << " ";
	std::cout << std::endl;

	std::cout << "Bye!\n";

	return 0;


}
