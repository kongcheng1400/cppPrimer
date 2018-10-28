#include <iostream>
#include <string>
#include <cctype>
int main()
{
	std::string str;
	int cnt = 0;
	const std::string strAOEIU = "aoeiu";
	std::cout << "Please input a word: ";
	while (std::cin >> str)
	{
		for (const char ch : str)
		{
			if (strAOEIU.find(std::tolower(ch)) != std::string::npos)
				cnt++;
		}

		std::cout << cnt << " vowels in the word.\n";
		cnt = 0;
		std::cout << "Please input a word: ";
	
	}

	std::cout << "Bye!\n";
	return 0;
}
