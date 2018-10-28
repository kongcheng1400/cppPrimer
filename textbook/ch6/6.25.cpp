#include <iostream>
#include <string>

int main(int argc, char * argv[])
{
	std::string s1;
	s1 = std::string(argv[0]) + std::string(argv[1]) + std::string(argv[2]);


	for (int i = 0; i < argc; i++)
		s1 += std::string(argv[i]) + " "; 
	std::cout << s1 << std::endl;



	return 0;
}
