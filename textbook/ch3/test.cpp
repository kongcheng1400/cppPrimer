#include <iostream>
#include <string>

int main()
{

	std::string word;
	std::cin >> word;
	std::cin.get();
	const std::string s = "keep out!";
	for (auto &c : s) { std::cout << c;}
	std::cout << std::endl;
	std::cout << "Bye!\n";
	return 0;
}
