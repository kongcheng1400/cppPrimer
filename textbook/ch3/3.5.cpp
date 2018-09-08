#include <iostream>
#include <string>


int main()
{
	std::string word, line;
	while (std::cin >> word) 
	{
		word += " ";//add space after each word
		line += word;

	}
	std::cout << line << std::endl;


	return 0;
}
