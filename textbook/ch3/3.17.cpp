#include <iostream>
#include <string>
#include <vector>
#include <cctype>


int main()
{
	std::vector<std::string> vs;
	std::string str;
	while( std::cin >> str)
		vs.push_back(str);

	for (std::string & s : vs)
	{
		std::string tmp;
		for (auto & c : s)	
			c = std::toupper(c);
	
	}


	for (std::string & s : vs)
		std::cout << s << " ";
	std::cout << std::endl;




	return 0;



}
