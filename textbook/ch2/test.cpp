#include <iostream>

int main()
{
	
	const int v2 = 0;
	int v1 = v2;
	int & r1 = v1;
	r1 = v2;
	r1 = 30;
	std::cout << "v2 = " << v2 << std::endl;
	
	//int & r3 = v2;

	//int null = 0, *p = (int *)null;
	int null = 0, *p = NULL;
	return 0;
}
