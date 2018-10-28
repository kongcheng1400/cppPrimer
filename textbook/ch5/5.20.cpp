#include <iostream>
#include <string>

int main()
{
	std::string str, preStr;
	bool flag = false;
	while (std::cin >> str)
	{
		if (str == preStr)
		{
			flag = true;
			std::cout << "same string as previous one: " << str << std::endl;;
			break;
		}
		else
			preStr = str;
	
	}

	if (!flag)
		std::cout << "no same string!\n";

	std::cout << "Bye!\n";
	return 0;


}
