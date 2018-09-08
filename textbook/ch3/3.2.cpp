#include <iostream>
#include <string>

int main()
{
	std::string line;
	std::getline(std::cin, line);
	std::cout << "the input line: " << line << std::endl;



	std::string word;
	while(std::cin >> word)
		std::cout << word << std::endl;

	std::cout << "Bye\n";
	return 0;
}
