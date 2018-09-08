#include <iostream>
#include <string>
#include <cctype>


int main()
{
	std::string str;
	std::cout << "Please input a line: ";
	std::getline(std::cin, str);
	
	std::string::size_type i = 0;
	while (i < str.size())
	{
		if (std::isalpha(str[i]))
			str[i] = 'X';
		i++;
	}
	std::cout << "changed to : " << str << std::endl;


	std::cout << "Please input a line for loop: ";
	std::getline(std::cin, str);
	for (std::string::size_type i = 0; i < str.size(); i++)
	{
		if (std::isalpha(str[i]))
			str[i] = 'X';
	}
	std::cout << "changed to : " << str << std::endl;

	return 0;
}
