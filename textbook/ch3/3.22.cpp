#include <iostream>
#include <string>
#include <iterator>
#include <vector>


int main()
{
	std::vector<std::string> words;
	std::cout << "Please input some words:";
	std::string tmp;
	while (std::cin >> tmp)
		words.push_back(tmp);

	if (!words.empty())
	{
		std::cout << "first word is : " << words[0] << std::endl;
		std::cout << "To upper: ";
		std::string & st = *words.begin();
		for (auto iter = st.begin(); iter != st.end();  ++iter)	
			*iter = std::toupper(*iter);

		for (std::string st : words)
			std::cout << st << " ";
		std::cout << std::endl;
	}
	else
		std::cout << "empty words!\n";

	std::cout << "Bye!\n";


	return 0;
}
