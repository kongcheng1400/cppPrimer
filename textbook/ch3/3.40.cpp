#include <iostream>
#include <cstring>


int main()
{
	char stra[] = "Hello,";
	char strb[] = " world!";
	
	char strc[50];
	std::strcpy(strc, stra);
	std::strcat(strc, strb);
	std::cout << strc << std::endl;
	return 0;
}
