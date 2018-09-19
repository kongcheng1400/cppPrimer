#include <iostream>
#include <string>
#include <cstring>

int main()
{
	char *stra = "Hello!";
	char *strb = "Hello1!";

	std::string str1(stra);
	std::string str2(strb);

	std::cout << stra << " > " << strb << " is "
			  << (strcmp(stra, strb) ? " true " : " false ")
			  << std::endl;

	std::cout << "String " << str1 << " > " << str2 << " is "
			  << (str1 > str2 ? " true " : " false")
			  << std::endl;

	return 0;
}
