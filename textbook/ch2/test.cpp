#include <iostream>

int main()
{
	
	int i = 42;
	int * pi = & i;
	*pi = 43;
	std::cout << "changed by pointer: " << i << std::endl;


	const int * p;	
	return 0;
}
