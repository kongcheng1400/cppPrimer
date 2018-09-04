#include <iostream>

int main()
{
	
	int i = 42;
	int * pi = & i;
	*pi = 43;
	std::cout << "changed by pointer: " << i << std::endl;


	const int * p, & r1 = i;	
	r1 = 30;
	return 0;
}
